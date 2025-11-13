// 函数: sub_142038360
// 地址: 0x142038360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr
int64_t* var_38
sub_1424373a0((*(*arg1 + 0x150))(), &var_38)
int32_t var_30
int32_t rax_2 = var_30

while (true)
    int64_t* rdx_1 = var_38
    int64_t rcx
    
    if (rax_2 s< 0 || rax_2 s>= rdx_1[1].d)
        rcx.b = 0
    else
        rcx.b = 1
    
    if (rcx.b == 0)
        break
    
    int64_t* result_1
    result_1, rcx = sub_140d3c6e0(*rdx_1 + (sx.q(rax_2) << 3))
    
    if (result_1 != 0)
        void* rdi_1 = result_1[0x53]
        int128_t* var_48
        
        if (rdi_1 != 0)
            void* rax_4 = sub_14254f450()
            void* rdx_2 = *(rdi_1 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                int128_t var_28
                var_48 = &var_28
                var_28 = *arg3
                sub_142264250(result_1, arg2, 2, arg4, var_48)
                rax_2 = var_30 + 1
                var_30 = rax_2
                continue
        
        result = result_1
        (*(*result_1 + 0xd90))(result_1, arg2, zx.q((zx.d(arg5) ^ 1) * 2), zx.q(arg4), var_48)
    
    rax_2 = var_30 + 1
    var_30 = rax_2

return result
