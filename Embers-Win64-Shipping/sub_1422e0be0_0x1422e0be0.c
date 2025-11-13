// 函数: sub_1422e0be0
// 地址: 0x1422e0be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5b2a0 == 0 && data_143de5438 == 0 && data_143de5434 == 0)
    return 

int32_t i = 0
*(arg1 + 0x14a8) = 1
void* r15_1 = arg1 + 0x1480
*(r15_1 + 8) = 0

if (*(r15_1 + 0xc) != 0)
    sub_1405c5570(r15_1, 0)

int16_t* var_50
int64_t* rax_1 = sub_140b18720(&var_50, &data_143f5b338, 0)

if (arg1 + 0x14b0 != rax_1)
    int64_t rcx_2 = *(arg1 + 0x14b0)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(arg1 + 0x14b0) = *rax_1
    *rax_1 = 0
    *(arg1 + 0x14b8) = rax_1[1].d
    *(arg1 + 0x14bc) = *(rax_1 + 0xc)
    rax_1[1] = 0

int16_t* rcx_4 = var_50

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

TEB* gsbase

if (data_143f565d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f565d0)
    
    if (data_143f565d0 == 0xffffffff)
        int64_t* rcx_39 = data_143db18d0
        
        if (rcx_39 == 0)
            sub_140a53c40()
            rcx_39 = data_143db18d0
        
        int64_t r8_12
        r8_12.b = 1
        data_143f565c8 = (*(*rcx_39 + 0xb0))(rcx_39, u"r.BufferVisualizationOverviewTargets", r8_12)
        _Init_thread_footer(&data_143f565d0)

int64_t* rcx_7 = data_143f565c8
int16_t* var_90
(*(*rcx_7 + 0xa0))(rcx_7, &var_90)
sub_141ea17d0()

if (sub_141ea5e10(&data_143a2d550, &var_90) != 0)
    int16_t* var_80 = nullptr
    int64_t var_78_1 = 0
    uint64_t r15_2 = 0
    uint64_t arg_18 = 0
    int32_t r14_1 = 0
    sub_141ead960(&data_143a2d550, &var_90)
    uint64_t* rax_8 = sub_141bbea70(&data_143a2d550)
    rax_8[1].d = 0
    
    if (*(rax_8 + 0xc) != 0)
        sub_1405c5570(rax_8, 0)
    
label_1422e0d52:
    int32_t var_88
    int32_t rax_9 = var_88
    
    while (true)
        if (rax_9 == 0 || rax_9 == 1)
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
            
            int16_t* rcx_34 = var_80
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            break
        
        var_50 = nullptr
        int32_t var_48_1 = 0
        sub_1405947f0(&var_50, 2)
        int32_t r15_3 = var_48_1 + 2
        
        if (r15_3 s> 0)
            sub_140594770(&var_50)
        
        int16_t* r12_1 = var_50
        UnDecorator::getReferenceType(r12_1, &data_142d7fa60, 4)
        int16_t* const rdx_5 = &data_142d40450
        
        if (r15_3 != 0)
            rdx_5 = r12_1
        
        int32_t rax_10 = sub_140a23cf0(&var_90, rdx_5, 1, 0, 0xffffffff)
        int32_t rdi_2 = var_88
        int64_t* rsi_1
        
        if (rax_10 s>= 0)
            int16_t* rax_11
            int32_t rsi_2
            
            if (rdi_2 == 0)
                rax_11 = &data_142d40450
                rsi_2 = 0
            else
                rax_11 = var_90
                rsi_2 = rdi_2 - 1
            
            int16_t* r12_2 = nullptr
            int16_t* var_70 = nullptr
            
            if (rax_10 s< rsi_2)
                rsi_2 = rax_10
            
            int64_t var_68_1 = 0
            int32_t r14_2 = 0
            int32_t r13_1 = 0
            
            if (rax_11 != 0 && *rax_11 != 0 && rsi_2 s> 0)
                if (rsi_2 + 1 s> 0)
                    sub_1405947f0(&var_70, rsi_2 + 1)
                    r13_1 = var_68_1:4.d
                    r14_2 = var_68_1.d
                    r12_2 = var_70
                
                r14_2 = r14_2 + 1 + rsi_2
                var_68_1.d = r14_2
                
                if (r14_2 s> r13_1)
                    sub_140594770(&var_70)
                    r13_1 = var_68_1:4.d
                    r14_2 = var_68_1.d
                    r12_2 = var_70
                
                UnDecorator::getReferenceType(r12_2, rax_11, rsi_2 * 2)
                r12_2[sx.q(r14_2) - 1] = 0
                rdi_2 = var_88
            
            int16_t* rcx_17 = var_80
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
                rdi_2 = var_88
            
            var_80 = r12_2
            var_70 = nullptr
            var_78_1.d = r14_2
            var_78_1:4.d = r13_1
            int64_t var_68_2 = 0
            int32_t r15_4
            
            if (r15_3 == 0)
                r15_4 = 0
            else
                r15_4 = r15_3 - 1
            
            int32_t rsi_3 = rdi_2 - 1
            int32_t rax_14 = rax_10 + r15_4
            
            if (rdi_2 == 0)
                rsi_3 = 0
            
            int32_t rcx_18
            
            if (rax_14 s>= 0)
                rcx_18 = rsi_3
                
                if (rax_14 s< rsi_3)
                    rcx_18 = rax_14
            else
                rcx_18 = 0
            
            int64_t r8_3 = sx.q(rcx_18)
            
            if (sx.q(rax_14) + 0x7fffffff s< r8_3)
                rsi_3 = rcx_18
            else if (sx.q(rax_14) + 0x7fffffff s< sx.q(rsi_3))
                rsi_3 = rax_14 + 0x7fffffff
            
            uint64_t var_60 = 0
            int16_t* rax_16 = &data_142d40450
            int64_t var_58_1 = 0
            
            if (rdi_2 != 0)
                rax_16 = var_90
            
            r15_2 = 0
            rsi_1 = zx.q(rsi_3 - rcx_18)
            r14_1 = 0
            void* r12_3 = &rax_16[r8_3]
            int32_t rax_17 = 0
            
            if (r12_3 != 0 && *r12_3 != 0 && rsi_1.d s> 0)
                int32_t rdx_11 = (rsi_1 + 1).d
                
                if (rdx_11 s> 0)
                    sub_1405947f0(&var_60, rdx_11)
                    rax_17 = var_58_1:4.d
                    r14_1 = var_58_1.d
                    r15_2 = var_60
                
                r14_1 += (rsi_1 + 1).d
                var_58_1.d = r14_1
                
                if (r14_1 s> rax_17)
                    sub_140594770(&var_60)
                    r14_1 = var_58_1.d
                    r15_2 = var_60
                
                UnDecorator::getReferenceType(r15_2, r12_3, rsi_1.d * 2)
                *(r15_2 + (sx.q(r14_1) << 1) - 2) = 0
                rdi_2 = var_88
            
            var_60 = 0
            int64_t var_58_2 = 0
            
            if (arg_18 != 0)
                sub_140a74f90(arg_18)
                rdi_2 = var_88
            
            r12_1 = var_50
            rsi_1.b = 0
            arg_18 = r15_2
        else
            r15_2 = arg_18
            rsi_1.b = 1
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
            rdi_2 = var_88
        
        if (rsi_1.b != 0)
            int16_t* rsi_4 = var_90
            var_78_1.d = rdi_2
            
            if (rdi_2 != 0 || var_78_1:4.d != 0)
                sub_1405a4c70(&var_80, rdi_2, var_78_1:4.d)
                memcpy(var_80, rsi_4, rdi_2 * 2)
            else
                var_78_1:4.d = 0
            
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
            
            r15_2 = 0
            arg_18 = 0
            r14_1 = 0
        
        sub_140a360c0(&var_80)
        int16_t* const rdx_16 = &data_142d40450
        
        if (var_78_1.d != 0)
            rdx_16 = var_80
        
        void var_98
        void* rax_20 = sub_141ea3730(&data_143a2d550, *sub_140b58260(&var_98, rdx_16, 1))
        int64_t* rax_21 = sub_141bbea70(&data_143a2d550)
        rsi_1 = sx.q(rax_21[1].d)
        int32_t rcx_29 = (rsi_1 + 1).d
        rax_21[1].d = rcx_29
        
        if (rcx_29 s> *(rax_21 + 0xc))
            sub_1405a4d70(rax_21)
        
        *(*rax_21 + (rsi_1 << 3)) = rax_20
        rax_9 = r14_1
        var_88 = rax_9
        int32_t var_84
        
        if (r14_1 == 0 && var_84 == 0)
            var_84 = 0
            continue
        
        sub_1405a4c70(&var_90, r14_1, var_84)
        memcpy(var_90, r15_2, r14_1 * 2)
        goto label_1422e0d52

int64_t* rsi_5 = sub_141bbea70(&data_143a2d550)

while (i s>= 0)
    if (i s>= rsi_5[1].d)
        break
    
    int64_t rdi_4 = sx.q(*(r15_1 + 8))
    int64_t rcx_35 = *rsi_5
    int32_t rax_23 = (rdi_4 + 1).d
    *(r15_1 + 8) = rax_23
    int64_t** r14_5 = rcx_35 + (sx.q(i) << 3)
    
    if (rax_23 s> *(r15_1 + 0xc))
        sub_1405a4d70(r15_1)
    
    i += 1
    *(*r15_1 + (rdi_4 << 3)) = *r14_5

int16_t* rcx_38 = var_90

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)
