// 函数: sub_142ccaf00
// 地址: 0x142ccaf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e24348
void** const result = &data_142ec8878
bool cond:0 = rcx == data_143e244b0
data_143e24338 = &data_142ec8878

if (not(cond:0))
    result = sub_140de9860(rcx, data_143e24340)

int64_t* rbx = data_143e24350

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
