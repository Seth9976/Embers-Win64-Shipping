// 函数: sub_140d32a50
// 地址: 0x140d32a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
char var_34 = 0
int64_t* rcx = *rax
*(arg2 + 0x20) = &rax[1]
int64_t* var_48 = rcx
int32_t rdx = rax[1].d
*(arg2 + 0x20) = rax + 0xc
int32_t count_1 = *(rcx + 0x3c)
sub_140cda7e0(&var_48, rdx)
char* result = *(arg2 + 0x20)

if (*result != 0x66)
    char rbp_1 = not.b(var_34) & 1
    int64_t* r12_1 = var_48
    int32_t r13_1 = 0
    int64_t count = sx.q(count_1)
    
    do
        int32_t rdi_1 = arg3[1].d
        int32_t rcx_2 = *(arg3 + 0xc)
        int32_t rax_3 = rdi_1 + 1
        arg3[1].d = rax_3
        
        if (rbp_1 != 0)
            if (rax_3 s> rcx_2)
                sub_140ce4cd0(arg3, zx.q(rdi_1), count.d)
                rax_3 = arg3[1].d
        else if (rax_3 s> rcx_2)
            sub_140ce4c40(arg3, rdi_1, count.d)
            rax_3 = arg3[1].d
        
        void* rcx_5
        
        if (rax_3 != 0)
            void* rax_4 = *arg3
            
            if (rbp_1 == 0 && (rax_4.b & 1) != 0)
                rax_4 = (rax_4 s>> 1) + arg3
            
            rcx_5 = sx.q(rdi_1 * count.d) + rax_4
        else
            rcx_5 = nullptr
        
        if (not(test_bit(zx.q(r12_1[8].d), 9)))
            (*(*r12_1 + 0xf0))(r12_1, rcx_5)
        else
            memset(rcx_5, 0, count)
        
        void* r8_3
        
        if (arg3[1].d != 0)
            void* rax_8 = *arg3
            
            if (rbp_1 == 0 && (rax_8.b & 1) != 0)
                rax_8 = (rax_8 s>> 1) + arg3
            
            r8_3 = sx.q(r13_1) + rax_8
        else
            r8_3 = nullptr
        
        char* rax_10 = *(arg2 + 0x20)
        uint32_t rcx_8 = zx.d(*rax_10)
        *(arg2 + 0x20) = &rax_10[1]
        (&data_143e1cd60)[zx.q(rcx_8)](*(arg2 + 0x18), arg2, r8_3, &data_143e1cd60)
        result = *(arg2 + 0x20)
        r13_1 += count.d
    while (*result != 0x66)

void* rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
return result
