// 函数: sub_140cbaac0
// 地址: 0x140cbaac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rax = data_143e1ae1c
data_143e1ae18 = 0

if (rax s< 0 && rax != 0)
    sub_1405c5570(&data_143e1ae10, 0)

int32_t rax_1 = data_143e1d990

if (data_143de5444 != 0)
    rax_1 = 0

int32_t rbx_1 = data_143e1d9b4 - rax_1
data_143e1b330 = 0
int64_t* rax_2 = sub_140a242a0()
int64_t rdx = *rax_2
int32_t rcx_2 = (*(rdx + 0x18))(rax_2, rdx)
int64_t* var_68 = nullptr
int32_t var_60 = 0
int32_t var_38 = rbx_1

if (rcx_2 s<= 1)
    rcx_2 = 1

int64_t* var_48 = &var_68
int32_t var_3c = rcx_2
int32_t var_40 = divs.dp.d(sx.q(rbx_1), rcx_2) + 1
int64_t (* var_58)(int64_t* arg1, int32_t* arg2) = sub_140cb0910
int64_t** var_50 = &var_48
sub_14077b750(rcx_2, &var_58, zx.d(arg1))
int64_t* r15 = var_68
int64_t result = &r15[sx.q(var_60)]
performanceCount = result

if (r15 != result)
    do
        void* rax_9 = *r15
        int64_t rbp_1 = 0
        *(rax_9 + 8) &= 0xfeffffff
        int32_t r13_2 = not.d(*(rax_9 + 0xc))
        int64_t rax_11 = data_143e1d678
        int64_t rcx_4 = sx.q(r13_2) * 0xa
        int32_t* rsi_1 = *(rax_11 + (rcx_4 << 3) + 8)
        uint64_t r14_2 = sx.q(*(rax_11 + (rcx_4 << 3) + 0x10)) << 2 u>> 2
        
        if (rsi_1 u> &rsi_1[sx.q(*(rax_11 + (rcx_4 << 3) + 0x10))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int32_t rax_14 = *rsi_1
                uint32_t rdx_3 = zx.d(rax_14.w)
                
                if (rax_14 s< 0)
                    rax_14 += 0xffff
                    rdx_3 -= 0x10000
                
                int64_t rdx_4 = sx.q(rdx_3) * 3
                int64_t rcx_6 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                *(rcx_6 + (rdx_4 << 3) + 0xc) = 0
                void* rdi_1 = rcx_6 + (rdx_4 << 3)
                int32_t rcx_7 = *(rcx_6 + (rdx_4 << 3) + 8)
                
                if (((rcx_7 u>> 0x17).b & 1) == 0)
                    *(rdi_1 + 8) = rcx_7 | 0x10000000
                    int64_t rbx_2 = sx.q(data_143e1ae18)
                    int32_t rax_20 = (rbx_2 + 1).d
                    bool cond:3_1 = rax_20 s<= data_143e1ae1c
                    data_143e1ae18 = rax_20
                    
                    if (not(cond:3_1))
                        sub_1405a4d70(&data_143e1ae10)
                    
                    *(data_143e1ae10 + (rbx_2 << 3)) = rdi_1
                
                rsi_1 = &rsi_1[1]
                rbp_1 += 1
            while (rbp_1 != r14_2)
        
        result = sub_140d20120(&data_143e1d678, r13_2)
        r15 = &r15[1]
    while (r15 != performanceCount)
    
    r15 = var_68

if (r15 == 0)
    return result

return sub_140a74f90(r15)
