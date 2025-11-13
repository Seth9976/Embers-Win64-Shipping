// 函数: sub_141405870
// 地址: 0x141405870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = (data_1439b6c78).d
int32_t r9 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0
int32_t r10 = 0

if (rdi != 0)
    void* rax_1 = data_1439b6c70
    void* r8 = &data_1439b6c60
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rcx = *r8
    
    if (rcx != 0)
    label_141405927:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r10 - rax_9 + 0x1f
        
        if (r10 - rax_9 + 0x1f s> rdi)
            var_74.d = rdi
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r10 += 0x20
            r9 += 1
            var_74:4.d = r10
            var_88 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r8 + (rcx_1 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141405927
        
        var_74.d = rdi

var_74.d = rdi
int128_t var_28 = 0xffffffff
int32_t r11 = 0xffffffff << (rdi.b & 0x1f)
int128_t var_38 = var_88.o
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = (&data_1439b6c50).o
int128_t var_58 = var_38
int64_t var_48 = temp0_3

while (true)
    int64_t rcx_5 = sx.q(var_58:0xc.d)
    int64_t* result = var_68.q
    
    if (rcx_5.d == (r11.q u>> 0x20).d && var_58.q == &data_1439b6c60 && result == &data_1439b6c50)
        if (arg1[0x1f] == arg2)
            result.b = 0
        else
            int64_t* rcx_9 = data_143f0f180
            (*(*rcx_9 + 0x100))(rcx_9, *arg1, arg2[0x2b6])
            char rax_16 = sub_1422eb5d0(arg2)
            
            if (rax_16 != 0)
                if (*(*arg2 + 8) s<= 0)
                    goto label_141405a63
                
                goto label_141405a28
            
            if (*(arg2 + 0xd7c) == rax_16 || *(*arg2 + 8) s<= 0)
            label_141405a63:
                int64_t* rcx_14 = data_143f0f180
                (*(*rcx_14 + 0x100))(rcx_14, arg1[1], arg2[0x2b6])
                result.b = 1
                arg1[0x1f] = arg2
            else
            label_141405a28:
                char rax_18
                int32_t rdx_4
                rax_18, rdx_4 = sub_142391f10(arg2)
                void* rax_19 = sub_1422e5d90(*arg2, sbb.d(rdx_4, rdx_4, rax_18 != 0) & 2)
                int64_t* rcx_13 = data_143f0f180
                int64_t r9_1 = *rcx_13
                (*(r9_1 + 0x100))(rcx_13, arg1[1], *(rax_19 + 0x15b0), r9_1, var_88, 
                    &data_1439b6c60, r11)
                result.b = 1
                arg1[0x1f] = arg2
        
        return result
    
    int64_t* rcx_7 = *(*result + rcx_5 * 0x10)
    (*(*rcx_7 + 0x10))(rcx_7, arg2, zx.q(arg3))
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
