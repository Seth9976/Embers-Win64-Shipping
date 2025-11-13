// 函数: sub_1422623c0
// 地址: 0x1422623c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
void* rsi = nullptr
void* rdi_1

if (rdi == 0)
    *arg1 = arg2
    rdi_1 = nullptr
else if (rdi == arg2)
    rdi_1 = nullptr
else
    void* rax_1 = sub_142497110()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rdi_2 = *arg1
        
        if (rdi_2 == 0)
            rdi_1 = nullptr
        else
            void* rax_4 = sub_14255d000()
            void* rdx_1 = *(rdi_2 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rdi_1 = *arg1
                
                if (rdi_1 == 0)
                    rdi_1 = nullptr
                else
                    void* rax_7 = sub_142574490()
                    void* rdx_2 = *(rdi_1 + 0x10)
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                        rdi_1 = nullptr
            else
                rdi_1 = *(rdi_2 + 0x240)
    else
        rdi_1 = *(rdi + 0x228)

arg1[0xbc] = rdi_1
int32_t var_c
uint64_t result

if (rdi_1 == 0)
label_14226265a:
    result = *arg1
    
    if (result != 0)
        int32_t rax_47 = *(result + 0xc)
        void* const rax_54
        
        if (rax_47 s>= data_143e1d9b4)
            rax_54 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_47)
            uint32_t rdx_16 = zx.d(temp2_1)
            int32_t rax_49 = temp3_1 + rdx_16
            rax_54 = *(data_143e1d9a0 + (sx.q(rax_49 s>> 0x10) << 3))
                + sx.q(zx.d(rax_49.w) - rdx_16) * 0x18
        
        result = zx.q(*(rax_54 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0)
            return result
else
    int32_t rax_10 = *(rdi_1 + 0xc)
    void* const rax_16
    
    if (rax_10 s>= data_143e1d9b4)
        rax_16 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_10)
        uint32_t rdx_4 = zx.d(temp0_1)
        int32_t rax_12 = temp1_1 + rdx_4
        rax_16 =
            *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_4) * 0x18
    
    if (((*(rax_16 + 8) u>> 0x1d).b & 1) != 0)
        goto label_14226265a
    
    void* rdi_3 = *arg1
    
    if (rdi_3 != 0)
        int32_t rax_19 = *(rdi_3 + 0xc)
        void* const rax_25
        
        if (rax_19 s>= data_143e1d9b4)
            rax_25 = nullptr
        else
            int16_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rax_19)
            uint32_t rdx_7 = zx.d(temp6_1)
            int32_t rax_21 = temp7_1 + rdx_7
            rax_25 = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3))
                + sx.q(zx.d(rax_21.w) - rdx_7) * 0x18
        
        if (((*(rax_25 + 8) u>> 0x1d).b & 1) != 0)
            goto label_142262565
        
        void* rax_28 = sub_14255d000()
        void* rdx_9 = *(rdi_3 + 0x10)
        int64_t rax_29 = sx.q(*(rax_28 + 0x38))
        
        if (rax_29.d s> *(rdx_9 + 0x38) || *(*(rdx_9 + 0x30) + (rax_29 << 3)) != rax_28 + 0x30
                || *(*arg1 + 0x240) != arg1[0xbc])
            goto label_142262565
        
        goto label_14226265a
    
label_142262565:
    result = arg1[0xbc]
    *arg1 = 0
    void* rdi_4 = *(result + 0xe0)
    
    if (rdi_4 != 0)
        void* rax_32 = sub_142497110()
        void* rdx_10 = *(rdi_4 + 0x10)
        int64_t rax_33 = sx.q(*(rax_32 + 0x38))
        
        if (rax_33.d s> *(rdx_10 + 0x38) || *(*(rdx_10 + 0x30) + (rax_33 << 3)) != rax_32 + 0x30)
            arg1[0xbc] = 0
        else
            void* r10_1 = *(rdi_4 + 0x250)
            void* const rax_42
            
            if (r10_1 != 0)
                int32_t rax_35 = *(r10_1 + 0xc)
                
                if (rax_35 s>= data_143e1d9b4)
                    rax_42 = nullptr
                else
                    int16_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(rax_35)
                    uint32_t rdx_12 = zx.d(temp8_1)
                    int32_t rax_37 = temp9_1 + rdx_12
                    rax_42 = *(data_143e1d9a0 + (sx.q(rax_37 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_37.w) - rdx_12) * 0x18
            
            if (r10_1 == 0 || ((*(rax_42 + 8) u>> 0x1d).b & 1) != 0)
                *arg1 = arg1[0xbc]
            else
                int64_t rax_45 = **(arg2 + 0x2b8)
                char var_14
                var_14.d = 1
                int32_t var_1c
                var_c = var_1c & 0xfffffffe
                int32_t var_18 = 0
                int32_t var_10_1 = 0x40000000
                (*(rax_45 + 0x678))(1, r10_1, arg1, &var_18)
        
        goto label_14226265a
    
    arg1[0xbc] = 0

void* r10_2 = *(arg2 + 0x250)
void* rdx_21

if (r10_2 != 0)
    if ((*(r10_2 + 0x5c) & 8) == 0)
        int32_t rax_56 = *(r10_2 + 0xc)
        
        if (rax_56 s< data_143e1d9b4)
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_56)
            uint32_t rdx_19 = zx.d(temp4_1)
            int32_t rax_58 = temp5_1 + rdx_19
            rsi = *(data_143e1d9a0 + (sx.q(rax_58 s>> 0x10) << 3))
                + sx.q(zx.d(rax_58.w) - rdx_19) * 0x18
    
    if ((*(r10_2 + 0x5c) & 8) != 0 || ((*(rsi + 8) u>> 0x1d).b & 1) != 0)
        result.b = 1
    else
        result.b = 0
    
    rdx_21 = r10_2

if (r10_2 == 0 || result.b != 0)
    rdx_21 = arg2

int64_t* rcx_27 = *(arg2 + 0x2b8)
int64_t rax_64 = *rcx_27
int32_t var_24_1 = 1.d
int32_t var_1c_2 = var_c & 0xfffffffe
int32_t var_28 = 0
return (*(rax_64 + 0x678))(rcx_27, rdx_21, arg1, &var_28, var_28, 0x40000000)
