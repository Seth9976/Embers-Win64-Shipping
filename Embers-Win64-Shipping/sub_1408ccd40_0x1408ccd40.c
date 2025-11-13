// 函数: sub_1408ccd40
// 地址: 0x1408ccd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (data_143983be8).d
int32_t rcx = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int32_t r8 = 0
int64_t var_64 = 0

if (r10 != 0)
    void* rax_1 = data_143983be0
    void* r11_1 = &data_143983bd0
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r11_1
    
    if (rdx_2 != 0)
    label_1408ccde5:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r11_1 + (rdx_3 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1408ccde5
        
        var_64.d = r10

int128_t var_18 = 0xffffffff
int32_t r9 = 0xffffffff << (r10.b & 0x1f)
int128_t var_28 = var_78.o
var_64.d = r10
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = (&data_143983bc0).o
int128_t var_48 = var_28
int64_t var_38 = temp0_3

while (true)
    int64_t result = sx.q(var_48:0xc.d)
    int64_t* rdx_4 = var_58.q
    
    if (result.d == (r9.q u>> 0x20).d && var_48.q == &data_143983bd0 && rdx_4 == &data_143983bc0)
        return result
    
    int64_t rcx_4 = result * 3
    int64_t rax_11 = *rdx_4
    (*(*arg2 + 0x38))(arg2, rax_11 + 8 + (rcx_4 << 3), *(rax_11 + (rcx_4 << 3)), 0, var_78, 
        &data_143983bd0, r9)
    var_48:8.d &= not.d(var_58:0xc.d)
    sub_14059bdd0(&var_58:8)
