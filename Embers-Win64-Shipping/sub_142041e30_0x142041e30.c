// 函数: sub_142041e30
// 地址: 0x142041e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0
int32_t var_18 = 0xffffffff
sub_140d3cc80(sub_142485400(), &var_28, 1, 0x10, 0)
int32_t rdx_1 = var_20
int64_t r8_1 = var_28
int32_t rcx_1 = var_18 + 1
int32_t var_18_1 = rcx_1
uint64_t result

if (rcx_1 s< rdx_1)
    while (*(r8_1 + (sx.q(rcx_1) << 3)) == 0)
        result = zx.q(rcx_1 + 1)
        var_18_1 = result.d
        rcx_1 = result.d
        
        if (result.d s>= rdx_1)
            break

while (true)
    if (rcx_1 s< 0 || rcx_1 s>= rdx_1)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    int64_t* rdi_1 = *(r8_1 + (sx.q(rcx_1) << 3))
    void* rsi_1 = rdi_1[0x14]
    
    if (rsi_1 != 0)
        void* rax_2 = sub_1425bb180()
        void* rcx_2 = *(rsi_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            void* rax_6 = (*(*arg1 + 0x150))(arg1, rax_3)
            
            if (sub_141ee6400(rdi_1) == *(rax_6 + 0x1b0) && sub_1405949a0() == 0)
                char r8_3 = 1
                char rdx_3
                char r8_4
                
                if ((*(*rdi_1 + 0x448))(rdi_1) == 0)
                    sub_141f49a80(rdi_1, 1, r8_3)
                    r8_4 = 1
                    rdx_3 = 0
                else
                    sub_141f49a80(rdi_1, 0, r8_3)
                    r8_4 = 1
                    rdx_3 = 1
                
                sub_141f479b0(rdi_1, rdx_3, r8_4)
        
        rcx_1 = var_18_1
        rdx_1 = var_20
        r8_1 = var_28
    
    result = zx.q(rcx_1 + 1)
    var_18_1 = result.d
    rcx_1 = result.d
    
    if (result.d s< rdx_1)
        while (*(r8_1 + (sx.q(rcx_1) << 3)) == 0)
            result = zx.q(rcx_1 + 1)
            var_18_1 = result.d
            rcx_1 = result.d
            
            if (result.d s>= rdx_1)
                break

if (r8_1 == 0)
    return result

return sub_140a74f90(r8_1)
