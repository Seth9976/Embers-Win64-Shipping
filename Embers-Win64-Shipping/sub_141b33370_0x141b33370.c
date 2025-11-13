// 函数: sub_141b33370
// 地址: 0x141b33370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c73c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c73c)
    
    if (data_143f2c73c == 0xffffffff)
        sub_141a387d0(&data_143f2c738)
        _Init_thread_footer(&data_143f2c73c)

int64_t* rdi = *(arg2 + 0x10)
int64_t rbx = 0
int32_t rsi = data_143f2c738
int32_t var_64 = rsi
int32_t var_50 = 0
int64_t var_70 = 0
uint128_t var_60 = 0.o
void* const r9_11

if (rdi[1].d == *(rdi + 0x34))
label_141b3350c:
    r9_11 = nullptr
else
    int32_t rax_3 = sub_1405be5b0(&var_60)
    void* rdx = rdi[8]
    void* r8 = &rdi[7]
    int32_t r10_3 = (rax_3 - rsi) ^ rsi u>> 0xd
    int32_t r9_4 = (0x9e3779b9 - r10_3 - rsi) ^ r10_3 << 8
    int32_t rsi_3 = (rsi - r9_4 - r10_3) ^ r9_4 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_4 - rsi_3) ^ rsi_3 u>> 0xc
    int32_t r9_7 = (r9_4 - r10_6 - rsi_3) ^ r10_6 << 0x10
    int32_t rsi_6 = (rsi_3 - r9_7 - r10_6) ^ r9_7 u>> 5
    int32_t r10_9 = (r10_6 - r9_7 - rsi_6) ^ rsi_6 u>> 3
    int32_t r9_10 = (r9_7 - r10_9 - rsi_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_20 =
        *(r8 + (((sx.q(rsi_6 - r9_10 - r10_9) ^ zx.q(r9_10) u>> 0xf) & (sx.q(rdi[9].d) - 1)) << 2))
    
    if (rax_20 == 0xffffffff)
    label_141b3350c_1:
        r9_11 = nullptr
    else
        int64_t r11_1 = *rdi
        
        while (true)
            int64_t r8_1 = sx.q(rax_20) * 5
            r9_11 = r11_1 + (r8_1 << 3)
            
            if (*(r11_1 + (r8_1 << 3)) == var_64 && *(r9_11 + 0x14) == var_50 && ((*(r9_11 + 8)
                    ^ var_60:4.d) | (*(r9_11 + 0xc) ^ var_60:8.d) | (*(r9_11 + 0x10) ^ var_60:0xc.d)
                    | (var_60.d ^ *(r9_11 + 4))) == 0)
                break
            
            rax_20 = *(r9_11 + 0x20)
            
            if (rax_20 == 0xffffffff)
                goto label_141b3350c_2
        
        if (rax_20 == 0xffffffff)
        label_141b3350c_2:
            r9_11 = nullptr

void* rsi_10 = r9_11 + 0x18

if (r9_11 == 0)
    rsi_10 = nullptr

int64_t* arg_8
int64_t* rsi_11

if (rsi_10 == 0)
    int64_t* rax_21 = j_sub_140a82f30(0xa8)
    rsi_11 = rax_21
    
    if (rax_21 == 0)
        rsi_11 = nullptr
    else
        void* rcx_9 = &rsi_11[3]
        *rsi_11 = &data_143056460
        rsi_11[1] = 0
        rsi_11[2] = 0
        *(rcx_9 + 0x10) = 0
        *(rcx_9 + 0x18) = 0
        *(rcx_9 + 0x1c) = 0x80
        void* rax_22 = *(rcx_9 + 0x10)
        
        if (rax_22 != 0)
            rcx_9 = rax_22
        
        *rcx_9 = 0
        *(rcx_9 + 8) = 0
        void* rcx_10 = &rsi_11[0xd]
        rsi_11[7].d = 0xffffffff
        *(rsi_11 + 0x3c) = 0
        rsi_11[9] = 0
        rsi_11[0xa].d = 0
        rsi_11[0xb] = 0
        rsi_11[0xc] = 0
        *(rcx_10 + 0x10) = 0
        *(rcx_10 + 0x18) = 0
        *(rcx_10 + 0x1c) = 0x80
        void* rax_23 = *(rcx_10 + 0x10)
        
        if (rax_23 != 0)
            rcx_10 = rax_23
        
        *rcx_10 = 0
        *(rcx_10 + 8) = 0
        rsi_11[0x11].d = 0xffffffff
        *(rsi_11 + 0x8c) = 0
        rsi_11[0x13] = 0
        rsi_11[0x14].d = 0
    
    int64_t* rcx_11 = *(arg2 + 0x10)
    arg_8 = rsi_11
    sub_1405a7400(rcx_11, &var_64, &arg_8)
    int64_t* rcx_12 = arg_8
    
    if (rcx_12 != 0)
        (**rcx_12)(rcx_12, 1)
else
    rsi_11 = *rsi_10

void* rax_27 = sub_141a4c440(*((*(*arg3 + 8))(arg3) + 8) + 0xd0, arg2 + 0x24)
int32_t r13_1

if (rax_27 == 0)
    r13_1 = 0
else
    r13_1 = *(rax_27 + 0x94)

int64_t* r15_2 = *(arg1 + 0x28)
int64_t result = sx.q(*(arg1 + 0x30))
char r14_2 = *(arg1 + 0x20)
int32_t rdi_3 = *(arg2 + 0x2c)
void* rcx_16 = &r15_2[result]
uint64_t var_88 = *(arg2 + 0x24)
arg_8.d = rdi_3
int64_t* arg_18
arg_18.b = r14_2
uint64_t r12_4 = (rcx_16 - r15_2 + 7) u>> 3

if (r15_2 u> rcx_16)
    r12_4 = 0

if (r12_4 != 0)
    do
        int64_t rax_28 = *r15_2
        int64_t arg_10 = rax_28
        int32_t r10_12 = sub_140b5ead0(rax_28.d) + rax_28:4.d
        void* rax_33
        
        if (rsi_11[2].d == *(rsi_11 + 0x3c))
        label_141b336ea:
            rax_33 = sub_141aee420(&rsi_11[1], r10_12, &arg_10)
        else
            void* rcx_18 = rsi_11[9]
            void* r8_8 = &rsi_11[8]
            
            if (rcx_18 != 0)
                r8_8 = rcx_18
            
            int32_t rax_32 = *(r8_8 + (((sx.q(rsi_11[0xa].d) - 1) & sx.q(r10_12)) << 2))
            
            if (rax_32 == 0xffffffff)
            label_141b336ea_1:
                rax_33 = sub_141aee420(&rsi_11[1], r10_12, &arg_10)
            else
                int64_t* rdx_16
                
                while (true)
                    rdx_16 = sx.q(rax_32) * 0x50 + rsi_11[1]
                    
                    if (*rdx_16 == arg_10)
                        break
                    
                    rax_32 = rdx_16[9].d
                    
                    if (rax_32 == 0xffffffff)
                        goto label_141b336ea_2
                
                if (rax_32 == 0xffffffff || rdx_16 == 0)
                label_141b336ea_2:
                    rax_33 = sub_141aee420(&rsi_11[1], r10_12, &arg_10)
                else
                    rax_33 = &rdx_16[1]
        
        var_70.d = rdi_3
        void* rdi_4 = rax_33 + 8
        char var_68_1 = r14_2
        int64_t r14_3 = sx.q(*(rdi_4 + 0x30))
        var_70:4.d = r13_1
        int32_t rax_34 = (r14_3 + 1).d
        *(rdi_4 + 0x30) = rax_34
        
        if (rax_34 s> *(rdi_4 + 0x34))
            sub_141b307a0(rdi_4, r14_3.d)
        
        void* rax_35 = *(rdi_4 + 0x28)
        int64_t rcx_22 = r14_3 * 5
        r14_2 = arg_18.b
        
        if (rax_35 != 0)
            rdi_4 = rax_35
        
        result = zx.q(var_68_1.d)
        r15_2 = &r15_2[1]
        rbx += 1
        *(rdi_4 + (rcx_22 << 2)) = var_88.o
        *(rdi_4 + (rcx_22 << 2) + 0x10) = result.d
        rdi_3 = arg_8.d
    while (rbx != r12_4)

return result
