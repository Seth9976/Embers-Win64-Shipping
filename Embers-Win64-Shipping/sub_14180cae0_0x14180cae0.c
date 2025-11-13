// 函数: sub_14180cae0
// 地址: 0x14180cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
int64_t* rdi = arg3
int64_t* rcx = *arg3
uint64_t result

if (rcx != 0)
    result = zx.q((*(*rcx + 0x40))(rcx) - 0xc8)

if (rcx == 0 || result.d u> 6)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    result = arg4
    *(arg1 + 0xd8) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
    
    if (*result != 0 && *(arg1 + 0xe0) != 0)
        if (*(arg1 + 0xf8) s< 0x400)
            int64_t* rcx_2 = *rdi
            int64_t* var_f8 = nullptr
            int32_t var_ec_1 = 0
            int32_t rax_4
            
            if (rcx_2 == 0)
                rax_4 = 0
            else
                rax_4 = (*(*rcx_2 + 0x40))(rcx_2)
            
            int64_t var_70
            sub_140a2e390(&var_70, u"%d", zx.q(rax_4))
            int64_t var_b0 = 0
            int64_t var_a8_1 = 0
            sub_1405947f0(&var_b0, 0xc)
            int32_t r13_1 = var_a8_1.d + 0xc
            var_a8_1.d = r13_1
            
            if (r13_1 s> 0)
                sub_140594770(&var_b0)
                r13_1 = var_a8_1.d
            
            int64_t rbx_1 = var_b0
            UnDecorator::getReferenceType(rbx_1, u"HTTP_STATUS", 0x18)
            int64_t r14_1 = var_70
            int32_t var_68
            int32_t rdi_1 = var_68
            var_70 = 0
            var_68.q = 0
            int32_t var_f0_1 = 1
            sub_1405c4f50(&var_f8)
            int64_t* r12_1 = var_f8
            *r12_1 = rbx_1
            r12_1[1].d = r13_1
            *(r12_1 + 0xc) = var_a8_1:4.d
            r12_1[2] = r14_1
            r12_1[3].d = rdi_1
            int32_t var_64
            *(r12_1 + 0x1c) = var_64
            r12_1[4] = 0
            r12_1[5].b = 0
            *(r12_1 + 0x2c) = 0
            int64_t rcx_8 = var_70
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t var_60
            sub_140a2e390(&var_60, u"%d", zx.q(*(*arg4 + 8)))
            int64_t var_d0 = 0
            int64_t var_c8_1 = 0
            sub_1405947f0(&var_d0, 0x10)
            int32_t rsi_2 = var_c8_1:4.d
            int32_t rdi_2 = var_c8_1.d + 0x10
            var_c8_1.d = rdi_2
            
            if (rdi_2 s> rsi_2)
                sub_140594770(&var_d0)
                rsi_2 = var_c8_1:4.d
                rdi_2 = var_c8_1.d
            
            UnDecorator::getReferenceType(var_d0, u"EVENTS_IN_BATCH", 0x20)
            int64_t r13_2 = sx.q(var_f0_1)
            int64_t var_e0 = var_60
            int32_t var_58
            int32_t var_e8_1 = var_58
            int32_t rbx_3 = (r13_2 + 1).d
            var_58.q = 0
            var_60 = 0
            int32_t r14_2 = var_ec_1
            
            if (rbx_3 s> r14_2)
                sub_1405c4f50(&var_f8)
                r14_2 = var_ec_1
                r12_1 = var_f8
            
            void* rcx_17 = &r12_1[r13_2 * 6]
            *rcx_17 = var_d0
            int64_t rax_11 = var_e0
            *(rcx_17 + 8) = rdi_2
            *(rcx_17 + 0xc) = rsi_2
            *(rcx_17 + 0x10) = rax_11
            *(rcx_17 + 0x18) = var_e8_1
            int32_t var_54
            *(rcx_17 + 0x1c) = var_54
            *(rcx_17 + 0x20) = 0
            *(rcx_17 + 0x28) = 0
            *(rcx_17 + 0x2c) = 0
            int64_t rcx_18 = var_60
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t var_50
            sub_140a2e390(&var_50, u"%d", zx.q(*(arg1 + 0xf8)))
            int64_t var_c0 = 0
            int64_t var_b8_1 = 0
            sub_1405947f0(&var_c0, 0xe)
            int32_t rsi_3 = var_b8_1:4.d
            int32_t rdi_3 = var_b8_1.d + 0xe
            var_b8_1.d = rdi_3
            
            if (rdi_3 s> rsi_3)
                sub_140594770(&var_c0)
                rsi_3 = var_b8_1:4.d
                rdi_3 = var_b8_1.d
            
            UnDecorator::getReferenceType(var_c0, u"EVENTS_QUEUED", 0x1c)
            var_e0 = var_50
            int32_t var_48
            int32_t var_e4_2 = var_48
            var_48.q = 0
            var_50 = 0
            int32_t r13_3 = rbx_3 + 1
            
            if (r13_3 s> r14_2)
                sub_1405c4f50(&var_f8)
                r14_2 = var_ec_1
                r12_1 = var_f8
            
            void* rcx_26 = &r12_1[sx.q(rbx_3) * 6]
            *rcx_26 = var_c0
            int64_t rax_19 = var_e0
            *(rcx_26 + 8) = rdi_3
            *(rcx_26 + 0xc) = rsi_3
            *(rcx_26 + 0x10) = rax_19
            *(rcx_26 + 0x18) = var_e4_2
            int32_t var_44
            *(rcx_26 + 0x1c) = var_44
            *(rcx_26 + 0x20) = 0
            *(rcx_26 + 0x28) = 0
            *(rcx_26 + 0x2c) = 0
            int64_t rcx_27 = var_50
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            var_e0 = 0
            int64_t var_d8_1 = 0
            sub_1405947f0(&var_e0, 0x15)
            int32_t rsi_4 = var_d8_1:4.d
            int32_t rdi_4 = var_d8_1.d + 0x15
            var_d8_1.d = rdi_4
            
            if (rdi_4 s> rsi_4)
                sub_140594770(&var_e0)
                rsi_4 = var_d8_1:4.d
                rdi_4 = var_d8_1.d
            
            int64_t rbx_4 = var_e0
            UnDecorator::getReferenceType(rbx_4, u"ET.DroppedSubmission", 0x2a)
            int64_t* var_90 = r12_1
            int64_t var_80
            sub_140b29d90(&var_80)
            int64_t rbx_5 = sx.q(*(arg1 + 0xf8))
            int32_t var_78
            int32_t var_78_1 = var_78 & 0xfffffffc
            int32_t rax_22 = (rbx_5 + 1).d
            *(arg1 + 0xf8) = rax_22
            
            if (rax_22 s> *(arg1 + 0xfc))
                sub_1405c4f50(arg1 + 0xf0)
            
            int64_t* rdx_10 = rbx_5 * 0x30 + *(arg1 + 0xf0)
            *rdx_10 = 0
            *rdx_10 = rbx_4
            int64_t var_a0_2
            __builtin_memset(&var_a0_2, 0, 0x20)
            rdx_10[1].d = rdi_4
            *(rdx_10 + 0xc) = rsi_4
            rdx_10[2] = 0
            rdx_10[2] = var_90
            rdx_10[3].d = r13_3
            *(rdx_10 + 0x1c) = r14_2
            rdx_10[4] = var_80
            rdx_10[5].d ^= (var_78_1 ^ rdx_10[5].d) & 1
            rdx_10[5].d ^= (var_78_1 ^ rdx_10[5].d) & 2
            sub_14180c130(&var_90)
            int64_t rcx_37 = var_a0_2
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            rbx = arg2
            rdi = arg3
            result = arg4
        
        if (*(arg1 + 0xe0) != 0 && *(arg1 + 0xf8) s< 0x100)
            result = sub_14180b440(arg1 + 0xf0, *result, 0)

int64_t* rbx_6 = *(rbx + 8)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp2_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* rbx_7 = rdi[1]

if (rbx_7 != 0)
    result = zx.q(rbx_7[1].d)
    rbx_7[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_7)(rbx_7)
        int32_t rdi_5 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rdi_5 == 1)
            result = (*(*rbx_7 + 8))(rbx_7, zx.q(rdi_5))

int64_t* rbx_9 = *(arg4 + 8)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        result = (**rbx_9)(rbx_9)
        int32_t temp4_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_9 + 8))(rbx_9, 1)

return result
