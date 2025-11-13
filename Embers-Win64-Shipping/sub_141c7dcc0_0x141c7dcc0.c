// 函数: sub_141c7dcc0
// 地址: 0x141c7dcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r15 = arg1 + 0x3c
int32_t arg_18 = 0xffffffff
void* r14 = arg1
sub_140af2fd0(data_143ddb400, u"DDoSDetection", u"bDDoSDetection", r15, &data_143de5780)
sub_140af2fd0(data_143ddb400, u"DDoSDetection", u"bDDoSAnalytics", r14 + 0x3d, &data_143de5780)
sub_140af3c10(data_143ddb400, u"DDoSDetection", u"DDoSLogSpamLimit", r14 + 0x64, &data_143de5780)
sub_140af3c10(data_143ddb400, u"DDoSDetection", u"HitchTimeQuotaMS", r14 + 0x6c, &data_143de5780)
sub_140af3c10(data_143ddb400, u"DDoSDetection", u"HitchFrameTolerance", &arg_18, &data_143de5780)
void* r12 = r14 + 0x40
*(r14 + 0x70) = arg_18.b
int32_t rcx_5 = 0x40
uint64_t result = zx.q(*(r14 + 0x64))

if (result.d s> 0)
    rcx_5 = result.d

*(r14 + 0x64) = rcx_5
int32_t i_4 = *(r12 + 8)

if (i_4 != 0)
    int64_t* rbx_1 = *r12 + 0x20
    int32_t i
    
    do
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_1 = &rbx_1[6]
        i = i_4
        i_4 -= 1
    while (i != 1)

*(r12 + 8) = 0

if (*(r12 + 0xc) != 0)
    result = sub_1405a5220(r12, 0)

if (*r15 != 0)
    void* rcx_8 = data_143ddb400
    int64_t* var_70 = nullptr
    int32_t result_2 = 0
    int32_t i_6 = 0
    int32_t result_3 = 0
    sub_140af2c50(rcx_8, u"DDoSDetection", u"DetectionSeverity", &var_70, &data_143de5780)
    int64_t* rsi_1 = var_70
    result = &rsi_1[sx.q(i_6) * 2]
    uint64_t result_1 = result
    
    if (rsi_1 != result)
        do
            int16_t* r15_1 = nullptr
            int16_t* var_a0 = nullptr
            int64_t var_98_1 = 0
            sub_1405947f0(&var_a0, 0xe)
            int32_t r14_1 = var_98_1:4.d
            int32_t rdi = var_98_1.d + 0xe
            var_98_1.d = rdi
            
            if (rdi s> r14_1)
                sub_140594770(&var_a0)
                r14_1 = var_98_1:4.d
                rdi = var_98_1.d
            
            int16_t* rbx_2 = var_a0
            int32_t rcx_12 = UnDecorator::getReferenceType(rbx_2, u"DDoSDetection", 0x1c)
            int16_t* var_90 = rbx_2
            var_a0 = nullptr
            int64_t var_98_2 = 0
            int32_t rdx_3 = sbb.d(rcx_12, rcx_12, rdi != 0) + 2 + rdi
            
            if (rdx_3 s> r14_1)
                sub_1405947f0(&var_90, rdx_3)
            
            sub_140a20ba0(&var_90, &data_142d404c4, 1)
            int16_t* r14_2 = var_90
            int32_t rdi_1 = rsi_1[1].d
            var_90 = nullptr
            int32_t var_88_1
            var_88_1.q = 0
            
            if (rdi s> 1)
                int32_t rbx_4 = rdi_1 - 1
                
                if (rdi_1 == 0)
                    rbx_4 = 0
                
                int32_t rcx_19
                
                if (rdi == 0)
                    rcx_19 = rdi + 1
                
                if (rdi != 0 || rbx_4 == 0)
                    rcx_19 = 0
                
                int16_t* var_80 = r14_2
                int32_t rdx_7 = rcx_19 + rdi + rbx_4
                
                if (rdx_7 s> r14_1)
                    sub_1405947f0(&var_80, rdx_7)
                
                sub_140a20ba0(&var_80, *rsi_1, rbx_4)
                r15_1 = var_80
                rdi_1 = rdi
                var_80 = nullptr
                int32_t var_78_1
                var_78_1.q = 0
                int32_t var_54_2 = r14_1
            else
                int64_t rbx_3 = *rsi_1
                int16_t* var_60 = nullptr
                
                if (rdi_1 != 0)
                    sub_1405a4c70(&var_60, rdi_1, 0)
                    r15_1 = var_60
                    memcpy(r15_1, rbx_3, rdi_1 * 2)
                else
                    int32_t var_54_1 = 0
                
                if (r14_2 != 0)
                    sub_140a74f90(r14_2)
            
            int16_t* const rdx_9 = &data_142d40450
            
            if (rdi_1 != 0)
                rdx_9 = r15_1
            
            result = sub_140aedb30(data_143ddb400, rdx_9, &data_143de5780)
            
            if (result.b != 0)
                int64_t rbx_5 = sx.q(*(r12 + 8))
                int32_t rax_7 = (rbx_5 + 1).d
                *(r12 + 8) = rax_7
                
                if (rax_7 s> *(r12 + 0xc))
                    sub_1405c4f50(r12)
                
                int32_t* rbx_8 = rbx_5 * 0x30 + *r12
                rbx_8[2] = 0xffffffff
                rbx_8[3].w = 0xffff
                *rbx_8 = -1
                *(rbx_8 + 0x10) = -1
                *(rbx_8 + 0x18) = -1
                *(rbx_8 + 0x20) = 0
                *(rbx_8 + 0x28) = 0
                int32_t arg_20 = 0
                
                if (&rbx_8[8] != rsi_1)
                    int32_t r13_1 = rsi_1[1].d
                    int64_t rax_8 = *rsi_1
                    int32_t r8_5 = rbx_8[0xb]
                    rbx_8[0xa] = r13_1
                    
                    if (r13_1 != 0 || r8_5 != 0)
                        sub_1405a4c70(&rbx_8[8], r13_1, r8_5)
                        memcpy(*(rbx_8 + 0x20), rax_8, r13_1 * 2)
                    else
                        rbx_8[0xb] = 0
                    
                    result_2 = result_3
                
                int16_t* rdx_13 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_13 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_13, EscalateQuotaPacketsPerSec", rbx_8, 
                    &data_143de5780)
                int16_t* rdx_14 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_14 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_14, EscalateQuotaDisconnPacketsPerSec", 
                    &rbx_8[1], &data_143de5780)
                int16_t* rdx_15 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_15 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_15, EscalateQuotaBadPacketsPerSec", &rbx_8[2], 
                    &data_143de5780)
                int16_t* rdx_16 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_16 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_16, PacketLimitPerFrame", &rbx_8[4], 
                    &data_143de5780)
                int16_t* rdx_17 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_17 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_17, PacketTimeLimitMSPerFrame", &rbx_8[5], 
                    &data_143de5780)
                int16_t* rdx_18 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_18 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_18, NetConnPacketTimeLimitMSPerFrame", &rbx_8[6], 
                    &data_143de5780)
                int16_t* rdx_19 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_19 = r15_1
                
                sub_140af3c10(data_143ddb400, rdx_19, u"CooloffTime", &rbx_8[7], &data_143de5780)
                int16_t* rdx_20 = &data_142d40450
                
                if (rdi_1 != 0)
                    rdx_20 = r15_1
                
                if (sub_140af3c10(data_143ddb400, rdx_20, EscalateTimeQuotaMSPerFrame", &arg_20, 
                        &data_143de5780) != 0)
                    rbx_8[3].w = arg_20.w
                
                result = zx.q(rbx_8[7])
                
                if (result_2 s>= result.d)
                    result = zx.q(result_2)
                
                result_2 = result.d
                result_3 = result.d
            
            if (r15_1 != 0)
                result = sub_140a74f90(r15_1)
            
            rsi_1 = &rsi_1[2]
        while (rsi_1 != result_1)
        
        r14 = arg1
    
    if (*(r14 + 0x48) s<= 0)
        *r15 = 0
    else
        int32_t* rcx_37 = sx.q(*(r14 + 0x50)) * 0x30 + *r12
        *(r14 + 0x1c) = *rcx_37
        *(r14 + 0x20) = rcx_37[1]
        *(r14 + 0x24) = rcx_37[2]
        *(r14 + 0x28) = rcx_37[3].w
        *(r14 + 0x2c) = rcx_37[4]
        *(r14 + 0x30) = rcx_37[5]
        *(r14 + 0x34) = rcx_37[6]
        result = zx.q(rcx_37[7])
        *(r14 + 0x38) = result.d
        int64_t rdi_2 = sx.q(*(r14 + 0x88))
        
        if (result_2 s> rdi_2.d)
            *(r14 + 0x88) = result_2
            int32_t i_3 = result_2 - rdi_2.d
            
            if (result_2 s> *(r14 + 0x8c))
                sub_1405c50f0(r14 + 0x80)
            
            result = rdi_2 * 0x1c + *(r14 + 0x80)
            
            if (i_3 != 0)
                int32_t i_1
                
                do
                    __builtin_memset(result, 0, 0x1c)
                    result += 0x1c
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
        else if (result_2 s< rdi_2.d && result_2 != rdi_2.d)
            *(r14 + 0x88) = result_2
            result = sub_1405c5460(r14 + 0x80)
    
    int32_t i_5 = i_6
    int64_t* rbx_10 = var_70
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t rcx_40 = *rbx_10
            
            if (rcx_40 != 0)
                result = sub_140a74f90(rcx_40)
            
            rbx_10 = &rbx_10[2]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    int64_t* rsi_2 = var_70
    
    if (rsi_2 != 0)
        return sub_140a74f90(rsi_2)

return result
