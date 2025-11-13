// 函数: sub_140d23930
// 地址: 0x140d23930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x10)
int64_t* rdi = arg2
int32_t r10_1 = *(rsi + 0xcc) & 0x10000080
uint64_t r12
r12.b = r10_1 == 0

if (arg4 != 0 || arg2 != rsi)
    arg2.b = 0
else
    arg2.b = 1

int64_t r14 = 0
void* result_1 = nullptr
uint32_t result = zx.d(arg4)

if (((*(arg1 + 8) u>> 0xa).b & 1) == 0)
    result_1 = zx.q(result)

char arg_20 = result_1.b

if (r10_1 == 0 || arg2.b == 0)
    int64_t r11_3 = arg3
    char rbp_1 = 0
    result = zx.d(arg2.b)
    
    if (r11_3 == rsi[0x23])
        rbp_1 = result.b
    
    if (result_1.b != 0)
        r14 = rdi[0x23]
        
        if (r14 == 0)
            result, result_1 = (*(*rdi + 0x390))(rdi)
            r11_3 = arg3
            r14 = rdi[0x23]
    
    int64_t* i
    
    if (rbp_1 == 0)
        i = rsi[0xe]
    else
        i = rsi[0x11]
    
    if (i != 0)
        result = 0x80000
        
        do
            if (r12.b != 0)
                char rax_5
                rax_5, result_1 = sub_140babb80(i, arg1)
                r12 = zx.q(rax_5)
                result = 0x80000
            
            int64_t r9_4 = i[8]
            
            if ((0x800000202000 & r9_4) != 0)
                result_1.b = 1
                
                if ((0x8000080000 & r9_4) == 0)
                    goto label_140d23ba2
                
                r11_3 = arg3
            else
                result_1.b = 0
            label_140d23ba2:
                void* rdx_7
                uint32_t count_2
                uint64_t r9_5
                
                if (arg_20 == 0 || result_1.b == 0)
                    if (rdi == 0)
                        result_1 = 0x7fffffff
                    else
                        result_1 = zx.q(rdi[0xb].d)
                    
                    int32_t r10_4 = i[7].d
                    int64_t rdx_9 = sx.q(*(i + 0x4c))
                    r11_3 = arg3
                    uint32_t count_3 = *(i + 0x3c) * r10_4
                    
                    if (rdx_9.d + count_3 s> result_1.d)
                        result = 0x80000
                    else
                        result_1 = rdx_9 + arg1
                        rdx_7 = rdx_9 + r11_3
                        
                        if (result_1 != rdx_7)
                            if (not(test_bit(r9_4, 0x1e)))
                                r9_5 = zx.q(r10_4)
                                goto label_140d23bfc
                            
                            count_2 = count_3
                            goto label_140d23bcd
                        
                        result = 0x80000
                else
                    int64_t rax_6 = sx.q(*(i + 0x4c))
                    rdx_7 = rax_6 + r14
                    result_1 = rax_6 + arg1
                    
                    if (result_1 == rdx_7)
                        result = 0x80000
                        r11_3 = arg3
                    else if (not(test_bit(r9_4, 0x1e)))
                        r9_5 = zx.q(i[7].d)
                    label_140d23bfc:
                        (*(*i + 0xb0))(i, result_1, rdx_7, r9_5)
                        result = 0x80000
                        r11_3 = arg3
                    else
                        count_2 = *(i + 0x3c) * i[7].d
                    label_140d23bcd:
                        memcpy(result_1, rdx_7, count_2)
                        result = 0x80000
                        r11_3 = arg3
            
            if (rbp_1 == 0)
                i = i[0xb]
            else
                i = i[0xe]
        while (i != 0)
    
    if (rbp_1 != 0)
        return (*(*rsi + 0x318))(rsi, arg1, r11_3)
else if (arg3 != 0)
    if (rsi[0x23] == arg3)
        for (int64_t* i_1 = rsi[0x11]; i_1 != 0; i_1 = i_1[0xe])
            int64_t rcx_3 = i_1[8]
            
            if ((0x800000202000 & rcx_3) == 0 || (0x8000080000 & rcx_3) == 0)
                int32_t rdx_3
                
                if (rdi == 0)
                    rdx_3 = 0x7fffffff
                else
                    rdx_3 = rdi[0xb].d
                
                int32_t r11_2 = i_1[7].d
                int64_t r9_2 = sx.q(*(i_1 + 0x4c))
                uint32_t count_1 = *(i_1 + 0x3c) * r11_2
                result = count_1 + r9_2.d
                
                if (result s<= rdx_3)
                    int64_t rdx_4 = r9_2 + arg3
                    void* r10_3 = r9_2 + arg1
                    
                    if (r10_3 != rdx_4)
                        if (not(test_bit(rcx_3, 0x1e)))
                            result = (*(*i_1 + 0xb0))(i_1, r10_3, rdx_4, zx.q(r11_2))
                        else
                            result = memcpy(r10_3, rdx_4, count_1)
    else
        for (int64_t* i_2 = rsi[0xe]; i_2 != 0; i_2 = i_2[0xb])
            int64_t rcx = i_2[8]
            
            if ((0x800000202000 & rcx) == 0 || (0x8000080000 & rcx) == 0)
                int32_t rdx
                
                if (rdi == 0)
                    rdx = 0x7fffffff
                else
                    rdx = rdi[0xb].d
                
                int32_t r11_1 = i_2[7].d
                int64_t r9 = sx.q(*(i_2 + 0x4c))
                uint32_t count = *(i_2 + 0x3c) * r11_1
                result = count + r9.d
                
                if (result s<= rdx)
                    int64_t rdx_1 = r9 + arg3
                    void* r10_2 = r9 + arg1
                    
                    if (r10_2 != rdx_1)
                        if (not(test_bit(rcx, 0x1e)))
                            result = (*(*i_2 + 0xb0))(i_2, r10_2, rdx_1, zx.q(r11_1))
                        else
                            result = memcpy(r10_2, rdx_1, count)

return result
