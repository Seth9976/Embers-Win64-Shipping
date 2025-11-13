// 函数: sub_142435380
// 地址: 0x142435380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int64_t var_18 = 0
int32_t var_10 = 0
sub_140d3ccc0(arg1, &var_18, 0, 0, 0)
int64_t rcx = var_18
int32_t rbx = 0

while (true)
    int64_t rax
    
    if (rbx s< 0 || rbx s>= var_10)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b == 0)
        break
    
    void* result_1 = *(rcx + (sx.q(rbx) << 3))
    
    if (result_1 != 0)
        void* rax_1 = sub_1425be5e0()
        void* rdx_1 = *(result_1 + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
            rcx = var_18
            result = result_1
            break
        
        rcx = var_18
    
    rbx += 1

if (rcx != 0)
    sub_140a74f90(rcx)

return result
