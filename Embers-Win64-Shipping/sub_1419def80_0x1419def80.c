// 函数: sub_1419def80
// 地址: 0x1419def80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = &arg1[2]
void* result = &rbx[4]
int64_t rbp = 4
int64_t rsi = 0

if (rbx u> result)
    rbp = 0

if (rbx u<= result)
    do
        int64_t rdi_1 = *rbx
        
        if (rdi_1 != 0)
            sub_1419def80(rdi_1)
            result = j_sub_140a74f90(rdi_1)
        
        rbx = &rbx[1]
        rsi += 1
    while (rsi != rbp)

int64_t rcx_2 = *arg1

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall
