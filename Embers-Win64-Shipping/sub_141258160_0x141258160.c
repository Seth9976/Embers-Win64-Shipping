// 函数: sub_141258160
// 地址: 0x141258160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** arg_18 = arg3
int64_t* r9 = *arg3
int64_t r15 = arg3[1]
void* rsi = *r9

if ((rsi.b & 1) != 0)
    rsi = (rsi s>> 1) + r9

int64_t r13 = sx.q(r9[1].d)

if (r13 s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t r14_1 = *(r15 + (rdi_1 << 3))
        uint32_t r12_1 = zx.d(*(rsi + (rdi_1 << 2)))
        void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_2[5]
        
        if (rax_1 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_2[5]
        
        *(arg1 + 0x30) = rax_1
        rdi_1 += 1
        void**** rax_2 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_2 = rcx_2
        *(arg1 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142da77a8
        rcx_2[2] = arg2
        rcx_2[3].d = r12_1
        rcx_2[4] = r14_1
    while (rdi_1 s< r13)
    
    r9 = *arg_18
    r15 = arg_18[1]

void* r14_2 = r9[2]
int64_t r13_3 = zx.q(r9[1].d << 3) + r15

if ((r14_2.b & 1) != 0)
    r14_2 = (r14_2 s>> 1) + &r9[2]

int64_t r12_2 = sx.q(r9[3].d)

if (r12_2 s> 0)
    int64_t rbx_1 = 0
    
    do
        rsi = *(r13_3 + (rbx_1 << 3))
        uint32_t r15_1 = zx.d(*(r14_2 + (rbx_1 << 2)))
        
        if ((*(*rsi + 8))(rsi) == 0)
            void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_8 = &rcx_9[5]
            
            if (rax_8 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_8 = &rcx_9[5]
            
            *(arg1 + 0x30) = rax_8
            void** rax_9 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_9 = rcx_9
            *(arg1 + 8) = &rcx_9[1]
            rcx_9[1] = 0
            *rcx_9 = &data_142da77c8
            rcx_9[2] = arg2
            rcx_9[3].d = r15_1
            rcx_9[4] = rsi
        
        rbx_1 += 1
    while (rbx_1 s< r12_2)
    
    r9 = *arg_18
    r15 = arg_18[1]

int32_t rdx = r9[3].d
int32_t rcx_13 = r9[1].d
uint64_t i_3 = zx.q(r9[5].d)
void* rdi_2 = r9[4]
int64_t r10_5 = zx.q((rcx_13 + rdx + i_3.d) << 3) + r15
int64_t* r11_2 = zx.q((rcx_13 + rdx) << 3) + r15
int64_t var_50 = r10_5
int64_t* var_58 = r11_2

if ((rdi_2.b & 1) != 0)
    rdi_2 = (rdi_2 s>> 1) + &r9[4]

uint64_t i_2

if (i_3.d != 0)
    uint64_t i_1 = i_3
    int64_t r14_4 = 0
    i_2 = i_1
    int64_t r15_3 = 0
    rsi.b = 1
    uint64_t i
    
    do
        int64_t r13_4 = *(r11_2 + r14_4)
        uint32_t r12_3 = zx.d((*rdi_2).w)
        void*** rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_17[5]
        void** const rax_18
        
        if ((*((r15_3 u>> 3) + r10_5) & rsi.b) == 0)
            if (rax_15 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                i_1 = i_2
                r10_5 = var_50
                rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                r11_2 = var_58
                rax_15 = &rcx_17[5]
            
            *(arg1 + 0x30) = rax_15
            void**** rax_19 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_19 = rcx_17
            *(arg1 + 8) = &rcx_17[1]
            rcx_17[1] = 0
            rax_18 = &data_142da77b8
        else
            if (rax_15 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                i_1 = i_2
                r10_5 = var_50
                rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                r11_2 = var_58
                rax_15 = &rcx_17[5]
            
            *(arg1 + 0x30) = rax_15
            void** rax_16 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_16 = rcx_17
            *(arg1 + 8) = &rcx_17[1]
            rcx_17[1] = 0
            rax_18 = &data_142d99560
        
        *rcx_17 = rax_18
        r15_3 += 1
        rdi_2 += 4
        rcx_17[4] = r13_4
        r14_4 += 8
        rsi.b = rol.b(rsi.b, 1)
        i = i_1
        i_1 -= 1
        rcx_17[3].d = r12_3
        i_2 = i_1
        rcx_17[2] = arg2
    while (i != 1)
    r9 = *arg_18
    r15 = arg_18[1]

int32_t rax_23 = r9[5].d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_23 + 7)
int64_t rdx_4 = zx.q(((temp1 + (temp0 & 7)) s>> 3) + ((r9[3].d + r9[1].d + rax_23) << 3)) + r15
void* r15_4 = r9[6]
int64_t var_50_1 = rdx_4

if ((r15_4.b & 1) != 0)
    r15_4 = (r15_4 s>> 1) + &r9[6]

void* result = r15_4 + sx.q(r9[7].d) * 0x18
void* result_1 = result

if (r15_4 != result)
    void* r15_6 = r15_4 + 8
    void* result_2 = result
    
    do
        void* rsi_3 = *r15_6
        
        if ((rsi_3.b & 1) != 0)
            rsi_3 = (rsi_3 s>> 1) + r15_6
        
        int64_t r13_5 = 0
        int64_t r12_4 = sx.q(*(r15_6 + 8)) << 2
        uint64_t r12_5 = r12_4 u>> 2
        
        if (rsi_3 u> rsi_3 + r12_4)
            r12_5 = 0
        
        if (r12_5 != 0)
            do
                int32_t rcx_28 = *rsi_3
                int64_t rbx_4 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                uint64_t r14_6 = zx.q(rcx_28 u>> 0x10)
                i_2.d = zx.d(rcx_28.w)
                arg_18.d = zx.d(*(r15_6 - 8))
                int64_t rax_33 = r14_6 + rbx_4
                var_58.d = rcx_28
                
                if (rax_33 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, (r14_6 + 0x10).d)
                    rdx_4 = var_50_1
                    rbx_4 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                    rax_33 = r14_6 + rbx_4
                
                *(arg1 + 0x30) = rax_33
                memcpy(rbx_4, rdx_4, r14_6.d)
                void*** rax_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_31 = &rax_36[6]
                
                if (rcx_31 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x38)
                    rax_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_31 = &rax_36[6]
                
                *(arg1 + 0x30) = rcx_31
                void**** rcx_33 = *(arg1 + 8)
                rsi_3 += 4
                *(arg1 + 0x14) += 1
                r13_5 += 1
                *rcx_33 = rax_36
                *(arg1 + 8) = &rax_36[1]
                rax_36[1] = 0
                *rax_36 = &data_142d99550
                rax_36[2] = arg2
                rax_36[4].d = arg_18.d
                *(rax_36 + 0x24) = i_2.d
                rax_36[3] = rbx_4
                rax_36[5].d = r14_6.d
                rdx_4 = var_50_1 + zx.q(var_58:2.w)
                var_50_1 = rdx_4
            while (r13_5 != r12_5)
            
            result_2 = result_1
        
        r15_6 += 0x18
        result = r15_6 - 8
    while (result != result_2)

return result
