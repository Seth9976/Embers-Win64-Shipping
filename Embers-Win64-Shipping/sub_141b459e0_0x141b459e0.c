// 函数: sub_141b459e0
// 地址: 0x141b459e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2[1].d) * 5
int64_t rax_1 = *arg2
int32_t rbp = *(rax_1 + (r10 << 3) - 0x20)
int128_t var_38 = *(rax_1 + (r10 << 3) - 0x10)
sub_140cea1e0()
char rax_2 = sub_140cc1670(&var_38, &data_143e1b870)
int64_t rbx_1

if (rax_2 != 0)
    rbx_1 = var_38.q

int64_t result
int64_t rcx_11
bool cond:0_1

if (rax_2 == 0 || rbx_1 == 0)
    char rax_9 = sub_140cc16a0(&var_38, sub_140bdfab0())
    
    if (rax_9 != 0)
        result = var_38.q
    
    if (rax_9 == 0 || result == 0)
        sub_140cea340()
        
        if (sub_140cc1670(&var_38, &data_143e1b820).b == 0 || var_38.q == 0)
            result.b = 0
        else
            int64_t rcx_16 = sx.q(arg2[1].d) * 5
            int64_t rax_11 = *arg2
            uint128_t zmm0_1 = *(rax_11 + (rcx_16 << 3) - 0x10)
            int32_t rdx_6 = *(rax_11 + (rcx_16 << 3) - 0x20)
            int64_t var_28_1 = zmm0_1.q
            
            if (_mm_bsrli_si128(zmm0_1, 8).d.b != 0)
                result.b = 0
            else
                rbx_1 = var_28_1
                
                if (rbx_1 == 0 || ((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x10).b & 1) == 0)
                    result.b = 0
                else
                    if (rdx_6 == 0xffffffff)
                        rdx_6 = 0
                    
                    result = zx.q(*(rbx_1 + 0x3c))
                    
                    if (result.d == 8 && rdx_6 s< *(rbx_1 + 0x38))
                        int64_t rcx_19 = sx.q(*(rbx_1 + 0x4c))
                        result = sx.q(result.d * rdx_6) + arg1
                        rcx_11 = rcx_19 + result
                        cond:0_1 = rcx_19 == neg.q(result)
                        goto label_141b45b4e
                    
                    result.b = 0
    else
        arg2[3] = result
        result.b = 0
else if (rbp != 0xffffffff)
    void* rcx_1 = *(rbx_1 + 0x78)
    int64_t* rdx = sx.q(*(rbx_1 + 0x4c)) + arg1
    int32_t r9 = *(rcx_1 + 0x3c)
    
    if (rbp s< 0)
        result.b = 0
    else
        result = zx.q(rdx[1].d)
        
        if (rbp s>= result.d || rcx_1 == 0 || ((zx.q(*(*(rcx_1 + 8) + 0x10)) u>> 0x10).b & 1) == 0
                || r9 != 8 || result.d == 0)
            result.b = 0
        else
            result = *rdx
            
            if ((not.b((*(rbx_1 + 0x80)).b) & 1) == 0 && (result.b & 1) != 0)
                result = (result s>> 1) + rdx
            
            int64_t rcx_4 = sx.q(r9 * rbp)
            int64_t rcx_5 = rcx_4 + result
            
            if (rcx_4 == neg.q(result))
                result.b = 0
            else
                arg2[2] = rcx_5
                int64_t* r10_2 = *(rbx_1 + 0x78)
                
                if (arg4 == rcx_5)
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
                else if (not(test_bit(zx.q(r10_2[8].d), 0x1e)))
                    (*(*r10_2 + 0xb0))(r10_2, arg4, rcx_5, 1)
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
                else
                    memcpy(arg4, rcx_5, *(r10_2 + 0x3c))
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
else if (((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x10).b & 1) == 0 || *(rbx_1 + 0x3c) != 8)
    result.b = 0
else
    int64_t rcx_10 = sx.q(*(rbx_1 + 0x4c))
    rcx_11 = rcx_10 + arg1
    cond:0_1 = rcx_10 == neg.q(arg1)
label_141b45b4e:
    
    if (cond:0_1)
        result.b = 0
    else
        arg2[2] = rcx_11
        
        if (arg4 == rcx_11)
            *arg3 = rbx_1
            result.b = 1
        else if (not(test_bit(zx.q(*(rbx_1 + 0x40)), 0x1e)))
            (*(*rbx_1 + 0xb0))(rbx_1, arg4, rcx_11, 1)
            *arg3 = rbx_1
            result.b = 1
        else
            memcpy(arg4, rcx_11, *(rbx_1 + 0x3c))
            result.b = 1
            *arg3 = rbx_1
return result
