// 函数: sub_1417ab2e0
// 地址: 0x1417ab2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x260)
char* var_60 = arg5
sub_14178cc30(rbx, arg2, arg3, arg4, &rbx[7])

if (*arg5 == 0)
    sub_141791250(rbx, arg2, &rbx[0x2a], &rbx[0x34])

if (arg5[1] == 0)
    sub_141791250(rbx, arg2, &rbx[0x12], &rbx[0x1c])
    sub_141791250(rbx, arg2, &rbx[0x1e], &rbx[0x28])

sub_14175b460(rbx)
int64_t* i = *arg2

for (void* r12 = &i[sx.q(arg2[1].d)]; i != r12; i = &i[1])
    int64_t* rsi_1 = *i
    int64_t* rax_2 = nullptr
    char r8_3 = *(rsi_1 + 0xc)
    
    if (r8_3 u>= 2)
        rax_2 = rsi_1
    
    if (rax_2 == 0 || *(sx.q(rax_2[1].d) + *(*rax_2 + 0x368)) == 0)
    label_1417ab42b:
        int32_t rbx_1 = *(*(*rsi_1 + 0x50) + (sx.q(rsi_1[1].d) << 2))
        int128_t* rax_9 = sub_1417ae350(arg1 + 0x290, rbx_1)
        int64_t r8_5 = sx.q(rsi_1[1].d)
        void* rax_10 = *rsi_1
        int32_t r9_3 = 0
        int32_t r11_1 = 0
        int64_t* var_50_1 = rsi_1
        int32_t r10_1 = 0
        int64_t var_3c_1 = 0
        int32_t rdi_1 = 0
        int64_t var_44_1 = 0
        int64_t rax_11 = *(rax_10 + 0xf8)
        int64_t rcx_12 = r8_5 * 3
        void* rdx_11 = rax_11 + (rcx_12 << 3)
        void* rcx_13 = *(rax_11 + (rcx_12 << 3) + 8)
        void* rax_12 = rdx_11
        
        if (rcx_13 != 0)
            rax_12 = rcx_13
        
        void* rdx_12 = rax_12 + (sx.q(*(rdx_11 + 0x10)) << 3)
        
        if (rax_12 != rdx_12)
            do
                int64_t rcx_15 = *rax_12
                rax_12 += 8
                rdi_1 |= *rcx_15
                r11_1 |= *(rcx_15 + 4)
                r10_1 |= *(rcx_15 + 8)
                r9_3 |= *(rcx_15 + 0xc)
            while (rax_12 != rdx_12)
            
            var_3c_1:4.d = r9_3
            var_3c_1.d = r10_1
            var_44_1:4.d = r11_1
            var_44_1.d = rdi_1
        
        char var_34_1 = 1
        int128_t zmm1_1 = (*(*(rax_10 + 0x50) + (r8_5 << 2))).o
        *rax_9 = (*(*(rax_10 + 0xe0) + (r8_5 << 3))).o
        rax_9[1] = zmm1_1
        rax_9[2].q = 0
        *(rax_9 + 0x28) = *(*(*rsi_1 + 0x170) + (sx.q(rsi_1[1].d) << 1))
        int128_t* rax_15 = sub_1417ae350(arg1 + 0x2b0, rbx_1)
        *rax_15 = *rax_9
        rax_15[1] = rax_9[1]
        rax_15[2] = rax_9[2]
        int128_t* rax_16 = sub_1417ae350(arg1 + 0x2d0, rbx_1)
        *rax_16 = *rax_9
        rax_16[1] = rax_9[1]
        rax_16[2] = rax_9[2]
    else
        int64_t* rax_4 = nullptr
        
        if (r8_3 u>= 3)
            rax_4 = rsi_1
        
        if (rax_4 != 0)
            int64_t* r8_4 = *(*(*rax_4 + 0x428) + sx.q(rax_4[1].d) * 0x10)
            
            if (r8_4 == 0)
                goto label_1417ab42b
            
            int64_t* rax_6 = nullptr
            
            if (*(r8_4 + 0xc) u>= 3)
                rax_6 = r8_4
            
            if (rax_6 == 0 || *(sx.q(rax_6[1].d) + *(*rax_6 + 0x470)) != 0)
                goto label_1417ab42b

return arg2
