// 函数: sub_140834780
// 地址: 0x140834780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sub_140871830()
int64_t result
void* const rbx_1

if (arg1[1].w != 3)
    rbx_1 = *arg1
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax = sub_140be01c0()
        void* rdx_1 = *(rbx_1 + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            rbx_1 = nullptr
        else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax + 0x30)
            rbx_1 = nullptr
else
    rbx_1 = data_143ce3880

if (rdi != 0)
    result = sx.q(*(rdi + 0x38))
    
    if (result.d s<= *(rbx_1 + 0x38) && *(*(rbx_1 + 0x30) + (result << 3)) == rdi + 0x30)
        result.b = 1
        return result

result.b = 0
return result
