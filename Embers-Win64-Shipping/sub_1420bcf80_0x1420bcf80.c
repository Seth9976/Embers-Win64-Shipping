// 函数: sub_1420bcf80
// 地址: 0x1420bcf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
void* rax
int64_t r9
rax, r9 = sub_1423de540(data_143f5b298, arg1, 0)

if (rbx == 0)
    if (rax != 0)
        rbx = sub_142436900(rax)
    
    if (rbx == 0)
        int16_t* const rdi_1
        
        if (arg2[1].d == 0)
            rdi_1 = &data_142d40450
        else
            rdi_1 = *arg2
        
        int64_t rbx_1 = *(data_143f5b298 + 0x28)
        sub_140b19e60()
        return (*(rbx_1 + 8))(data_143f5b298 + 0x28, rax, rdi_1, &data_1439a8bd0)

r9.b = 1
int64_t var_18
int64_t result = (*(*rbx + 0xc20))(rbx, &var_18, arg2, r9)
int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
