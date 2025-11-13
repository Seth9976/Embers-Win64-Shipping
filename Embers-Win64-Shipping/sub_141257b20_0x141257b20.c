// 函数: sub_141257b20
// 地址: 0x141257b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = arg3[1]
int64_t* r9 = *arg3
void* r15 = *r9

if ((r15.b & 1) != 0)
    r15 = (r15 s>> 1) + r9

int64_t rdx = sx.q(r9[1].d)
int64_t rsi
int64_t arg_8 = rsi
int64_t var_48 = rdx

if (rdx s> 0)
    rsi = 0
    
    do
        int16_t rbx_1 = (*(r15 + (rsi << 2))).w
        int64_t r12_1 = *(r13 + (rsi << 3))
        
        if (r12_1 != *(arg4 + (zx.q(rbx_1) << 3) + 0x410))
            void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_3 = &rcx_2[5]
            
            if (rax_3 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rdx = var_48
                rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_3 = &rcx_2[5]
            
            *(arg1 + 0x30) = rax_3
            void**** rax_4 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_4 = rcx_2
            *(arg1 + 8) = &rcx_2[1]
            rcx_2[1] = 0
            *rcx_2 = &data_142f11618
            rcx_2[2] = arg2
            rcx_2[3].d = zx.d(rbx_1)
            rcx_2[4] = r12_1
            *(arg4 + (zx.q(rbx_1) << 3) + 0x410) = r12_1
            uint32_t rcx_6 = arg4[0x102]
            uint32_t rax_9 = zx.d(rbx_1)
            
            if (rax_9 s>= rcx_6)
                rcx_6 = rax_9
            
            arg4[0x102] = rcx_6
        
        rsi += 1
    while (rsi s< rdx)
    
    r9 = *arg3
    r13 = arg3[1]

void* r12_2 = r9[2]
int64_t rcx_9 = zx.q(r9[1].d << 3) + r13
int64_t var_50 = rcx_9

if ((r12_2.b & 1) != 0)
    r12_2 = (r12_2 s>> 1) + &r9[2]

int64_t r15_2 = sx.q(r9[3].d)
int64_t var_48_1 = r15_2

if (r15_2 s> 0)
    rsi = 0
    
    do
        int16_t rbx_3 = (*(r12_2 + (rsi << 2))).w
        int64_t* r14_1 = *(rcx_9 + (rsi << 3))
        
        if (r14_1 != *(arg4 + (zx.q(rbx_3) << 3) + 0x890))
            if ((*(*r14_1 + 8))(r14_1) == 0)
                void*** rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_14 = &rcx_13[5]
                
                if (rax_14 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_14 = &rcx_13[5]
                
                r15_2 = var_48_1
                *(arg1 + 0x30) = rax_14
                void**** rax_15 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_15 = rcx_13
                *(arg1 + 8) = &rcx_13[1]
                rcx_13[1] = 0
                *rcx_13 = &data_142d5a080
                rcx_13[2] = arg2
                rcx_13[3].d = zx.d(rbx_3)
                rcx_13[4] = r14_1
            
            *(arg4 + (zx.q(rbx_3) << 3) + 0x890) = r14_1
            uint32_t rcx_17 = arg4[0x222]
            uint32_t rax_19 = zx.d(rbx_3)
            
            if (rax_19 s>= rcx_17)
                rcx_17 = rax_19
            
            arg4[0x222] = rcx_17
            rcx_9 = var_50
        
        rsi += 1
    while (rsi s< r15_2)
    
    r9 = *arg3
    r13 = arg3[1]

int32_t rdx_1 = r9[3].d
int32_t rcx_18 = r9[1].d
uint64_t i_1 = zx.q(r9[5].d)
void* r15_3 = r9[4]
int64_t r10_3 = zx.q((rcx_18 + rdx_1 + i_1.d) << 3) + r13
int64_t* r11_2 = zx.q((rcx_18 + rdx_1) << 3) + r13
int64_t var_50_1 = r10_3
int64_t* var_48_2 = r11_2

if ((r15_3.b & 1) != 0)
    r15_3 = (r15_3 s>> 1) + &r9[4]

int64_t var_60

if (i_1.d != 0)
    uint64_t i_2 = i_1
    int64_t r13_3 = 0
    var_60 = 0
    int64_t rdx_2 = 0
    rsi.b = 1
    uint64_t i
    
    do
        int16_t rbx_4 = (*r15_3).w
        int64_t r12_4 = *(r11_2 + r13_3)
        uint64_t rcx_19 = zx.q(rbx_4)
        
        if ((*((rdx_2 u>> 3) + r10_3) & rsi.b) == 0)
            if (r12_4 != *(arg4 + (rcx_19 << 3) + 0x488))
                void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_30 = &rcx_29[5]
                
                if (rax_30 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rdx_2 = var_60
                    i_1 = i_2
                    rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    r10_3 = var_50_1
                    r11_2 = var_48_2
                    rax_30 = &rcx_29[5]
                
                *(arg1 + 0x30) = rax_30
                int64_t* rax_31 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_31 = rcx_29
                *(arg1 + 8) = &rcx_29[1]
                rcx_29[1] = 0
                *rcx_29 = &data_142d5a070
                rcx_29[2] = arg2
                rcx_29[3].d = rcx_19.d
                rcx_29[4] = r12_4
                *(arg4 + (zx.q(rbx_4) << 3) + 0x488) = r12_4
                uint32_t rcx_33 = arg4[0x120]
                uint32_t rax_36 = zx.d(rbx_4)
                
                if (rax_36 s>= rcx_33)
                    rcx_33 = rax_36
                
                arg4[0x120] = rcx_33
        else if (r12_4 != *(arg4 + (rcx_19 << 3) + 8))
            void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_23 = &rcx_22[5]
            
            if (rax_23 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rdx_2 = var_60
                i_1 = i_2
                rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                r10_3 = var_50_1
                r11_2 = var_48_2
                rax_23 = &rcx_22[5]
            
            *(arg1 + 0x30) = rax_23
            int64_t* rax_24 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_24 = rcx_22
            *(arg1 + 8) = &rcx_22[1]
            rcx_22[1] = 0
            *rcx_22 = &data_142d5ebf8
            rcx_22[2] = arg2
            rcx_22[3].d = rcx_19.d
            rcx_22[4] = r12_4
            *(arg4 + (zx.q(rbx_4) << 3) + 8) = r12_4
            uint32_t rcx_26 = *arg4
            uint32_t rax_29 = zx.d(rbx_4)
            
            if (rax_29 s>= rcx_26)
                rcx_26 = rax_29
            
            *arg4 = rcx_26
        
        rdx_2 += 1
        rsi.b = rol.b(rsi.b, 1)
        r15_3 += 4
        var_60 = rdx_2
        r13_3 += 8
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    r9 = *arg3
    r13 = arg3[1]

int32_t rax_38 = r9[5].d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_38 + 7)
void* r15_5 = r9[6]
int64_t rdx_6 = zx.q(((temp1 + (temp0 & 7)) s>> 3) + ((r9[3].d + r9[1].d + rax_38) << 3)) + r13
int64_t var_58_1 = rdx_6

if ((r15_5.b & 1) != 0)
    r15_5 = (r15_5 s>> 1) + &r9[6]

void* result = r15_5 + sx.q(r9[7].d) * 0x18
void* result_1 = result

if (r15_5 != result)
    void* r15_7 = r15_5 + 8
    void* result_2 = result
    
    do
        void* rsi_2 = *r15_7
        
        if ((rsi_2.b & 1) != 0)
            rsi_2 = (rsi_2 s>> 1) + r15_7
        
        int64_t r12_5 = 0
        int64_t r13_4 = sx.q(*(r15_7 + 8)) << 2
        uint64_t r13_5 = r13_4 u>> 2
        
        if (rsi_2 u> rsi_2 + r13_4)
            r13_5 = 0
        
        if (r13_5 != 0)
            do
                int32_t rcx_38 = *rsi_2
                int64_t rbx_7 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                uint64_t r14_3 = zx.q(rcx_38 u>> 0x10)
                int64_t* arg_18
                arg_18.d = zx.d(*(r15_7 - 8))
                int64_t rax_48 = r14_3 + rbx_7
                var_60.d = rcx_38
                
                if (rax_48 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, (r14_3 + 0x10).d)
                    rdx_6 = var_58_1
                    rbx_7 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                    rax_48 = r14_3 + rbx_7
                
                *(arg1 + 0x30) = rax_48
                memcpy(rbx_7, rdx_6, r14_3.d)
                void*** rax_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_41 = &rax_51[6]
                
                if (rcx_41 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x38)
                    rax_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_41 = &rax_51[6]
                
                *(arg1 + 0x30) = rcx_41
                void**** rcx_43 = *(arg1 + 8)
                rsi_2 += 4
                *(arg1 + 0x14) += 1
                r12_5 += 1
                *rcx_43 = rax_51
                *(arg1 + 8) = &rax_51[1]
                rax_51[1] = 0
                *rax_51 = &data_142d549d8
                rax_51[2] = arg2
                rax_51[4].d = arg_18.d
                *(rax_51 + 0x24) = zx.d(rcx_38.w)
                rax_51[3] = rbx_7
                rax_51[5].d = r14_3.d
                rdx_6 = var_58_1 + zx.q(var_60:2.w)
                var_58_1 = rdx_6
            while (r12_5 != r13_5)
            
            result_2 = result_1
        
        r15_7 += 0x18
        result = r15_7 - 8
    while (result != result_2)

return result
