#include <stdio.h>

int main() {
    int index_old, index_new;
    int consumption;
    float total_cost = 0.0;
    
    printf("Nhap chi so cong to dien cu (dau thang): ");
    scanf("%d", &index_old);
    printf("Nhap chi so cong to dien moi (cuoi thang): ");
    scanf("%d", &index_new);
    if (index_new < index_old) {
        printf("Chi so cong to moi phai lon hon chi so cong to cu.\n");
        return 1;
    }
    consumption = index_new - index_old;
    if (consumption <= 50) {
        total_cost = consumption * 10000;
    } else if (consumption <= 100) {
        total_cost = 50 * 10000 + (consumption - 50) * 15000;
    } else if (consumption <= 150) {
        total_cost = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000;
    } else if (consumption <= 200) {
        total_cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000;
    } else {
        total_cost = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000;
    }
    printf("So dien tieu thu trong thang: %d kWh\n", consumption);
    printf("Tien dien phai tra: %.2f dong\n", total_cost);

    return 0;
}
