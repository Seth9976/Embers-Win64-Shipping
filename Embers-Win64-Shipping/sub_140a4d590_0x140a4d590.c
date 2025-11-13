// 函数: sub_140a4d590
// 地址: 0x140a4d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = sub_140a46220() + 0x48
void* rax_1 = data_143ddb400
int64_t rdi

if (rax_1 == 0 || *(rax_1 + 0x59) == 0)
    rdi.b = 0
else
    rdi.b = 1

if (data_143db48a0 != rdi.b)
    rbx[1].d = 0
    
    if (*(rbx + 0xc) s<= 0xffffffff)
        sub_1405947f0(rbx, 0)
    
    uint64_t rax_2 = *rbx
    
    if (rax_2 != 0)
        *rax_2 = 0
    
    data_143db48a0 = rdi.b

if (data_143db48a1 == 0 && sub_140b1d450() != 0)
    int32_t rax_4 = *(rbx + 0xc)
    rbx[1].d = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405947f0(rbx, 0)
    
    uint64_t rax_5 = *rbx
    
    if (rax_5 != 0)
        *rax_5 = 0
    
    data_143db48a1 = 1

int32_t rax_6 = rbx[1].d
int32_t rcx_3 = rax_6 - 1

if (rax_6 == 0)
    rcx_3 = 0

if (rcx_3 == 0)
    int32_t rax_8 = sub_140b69690() + 1
    
    if (rax_8 s> *(rbx + 0xc))
        sub_1405947f0(rbx, rax_8)
    
    if (rbx != &data_143db3758)
        int32_t rdi_1 = (data_143db3760).d
        int64_t rsi_1 = data_143db3758
        int32_t r8_1 = *(rbx + 0xc)
        rbx[1].d = rdi_1
        
        if (rdi_1 != 0 || r8_1 != 0)
            sub_1405a4c70(rbx, rdi_1, r8_1)
            memcpy(*rbx, rsi_1, rdi_1 * 2)
        else
            *(rbx + 0xc) = 0

int32_t rax_9 = rbx[1].d

if (rax_9 == 0 || rax_9 == 1)
    int32_t rax_11 = sub_140b69690() + 1
    
    if (rax_11 s> *(rbx + 0xc))
        sub_1405947f0(rbx, rax_11)
    
    if (sub_140b1d450() == 0)
        uint32_t rdx_9
        
        if ((*u"Embers")[0] != 0)
            int64_t r9_1 = 0
            
            while (true)
                int16_t rdx_5 = *(r9_1 + u"Embers")
                int16_t r8_4 = *(r9_1 + u"None")
                r9_1 += 2
                
                if (rdx_5 != r8_4)
                    if (((zx.d(r8_4) | zx.d(rdx_5)) & 0xffffff80) != 0)
                        rdx_9 = zx.d(rdx_5) - zx.d(r8_4)
                        break
                    
                    uint32_t rcx_15 = zx.d(*(zx.q(r8_4) + &data_142e5e8a0))
                    uint32_t rdx_8 = zx.d(*(zx.q(rdx_5) + &data_142e5e8a0))
                    rdx_9 = rdx_8 - rcx_15
                    
                    if (rdx_8 != rcx_15)
                        break
                else
                    if (rdx_5 == 0)
                        goto label_140a4d746
        
        int64_t var_38
        
        if ((*u"Embers")[0] == 0 || rdx_9 == 0)
        label_140a4d746:
            sub_140597da0(rbx, sub_140b141a0(&var_38))
            int64_t rcx_11 = var_38
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            sub_140b21570(rbx)
            int16_t* rdx_7
            
            if (rbx[1].d == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = *rbx
            
            sub_140597da0(rbx, sub_140a41c90(&var_38, rdx_7))
            int64_t rcx_58 = var_38
            
            if (rcx_58 != 0)
                sub_140a74f90(rcx_58)
            
            if (sub_140a237d0(rbx, &data_142d5a024, 1) == 0)
                sub_140a20ba0(rbx, &data_142d5a024, 1)
        else
            if (*rbx != u"../../")
                int32_t rdx_11 = 0
                rbx[1].d = 0
                
                if (*(rbx + 0xc) != 7)
                    sub_1405947f0(rbx, 7)
                    rdx_11 = rbx[1].d
                
                rbx[1].d = rdx_11 + 7
                
                if (rdx_11 + 7 s> *(rbx + 0xc))
                    sub_140594770(rbx)
                
                __builtin_wcscpy(*rbx, u"../../")
            
            sub_140b65060()
            int16_t* var_78 = nullptr
            int32_t var_70_1 = 0
            int32_t rax_19 = 0
            int32_t var_6c_1 = 0
            int16_t* r15_1 = nullptr
            int32_t rsi_2 = 0
            
            if (data_143e189c0 != 0)
                int64_t rdi_2 = -1
                
                do
                    rdi_2 += 1
                while ((&data_143e189c0)[rdi_2] != 0)
                
                if (rdi_2.d + 1 s> 0)
                    sub_1405947f0(&var_78, rdi_2.d + 1)
                    rax_19 = var_6c_1
                    rsi_2 = var_70_1
                    r15_1 = var_78
                
                rsi_2 += rdi_2.d + 1
                
                if (rsi_2 s> rax_19)
                    sub_140594770(&var_78)
                    r15_1 = var_78
                
                memcpy(r15_1, &data_143e189c0, (rdi_2.d + 1) * 2)
            
            sub_140b26cf0(&var_38)
            int64_t r14_1 = var_38
            int64_t var_68 = 0
            int32_t var_30
            
            if (var_30 != 0)
                sub_1405a4c70(&var_68, var_30, 0)
                memcpy(var_68, r14_1, var_30 * 2)
            else
                int32_t var_5c_1 = 0
            
            int16_t* const rdx_16 = &data_142d40450
            
            if (rsi_2 != 0)
                rdx_16 = r15_1
            
            int32_t rcx_26 = sub_140b20770(&var_68, rdx_16)
            int16_t* var_88 = nullptr
            sub_1405a4c70(&var_88, sbb.d(rcx_26, rcx_26, rsi_2 != 0) + 8 + rsi_2, 0)
            memcpy(var_88, r15_1, rsi_2 * 2)
            sub_140a2cf70(&var_88, u"../../", 6)
            Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_88)
            int64_t* rax_22 = sub_140b26cf0(&var_78)
            int16_t* rdx_20
            
            if (rax_22[1].d == 0)
                rdx_20 = &data_142d40450
            else
                rdx_20 = *rax_22
            
            sub_140b20770(&var_88, rdx_20)
            int16_t* rcx_34 = var_78
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            int32_t rsi_4
            
            if (rsi_2 == 0)
                rsi_4 = 0
            else
                rsi_4 = rsi_2 - 1
            
            int32_t rax_24
            
            if (var_30 == 0)
                rax_24 = var_30 + 2
            
            if (var_30 != 0 || rsi_4 == 0xffffffff)
                rax_24 = 1
            
            int64_t r14_2 = var_68
            int32_t rcx_35 = rax_24 + rsi_4
            var_78 = nullptr
            
            if (var_30 != 0 || rcx_35 != 0)
                sub_1405a4c70(&var_78, rcx_35 + var_30, 0)
                memcpy(var_78, r14_2, var_30 * 2)
            else
                var_6c_1 = 0
            
            sub_140a2cf70(&var_78, var_88, rsi_4)
            int16_t* rcx_39 = var_88
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
            
            var_88 = var_78
            int32_t var_80_2 = var_30
            int32_t var_7c_1 = var_6c_1
            
            if (sub_140a237d0(&var_88, &data_142d5a024, 1) == 0)
                sub_140a20ba0(&var_88, &data_142d5a024, 1)
            
            int16_t* var_48
            sub_140b11c80(&var_48, &var_88)
            int16_t* var_58
            sub_140b11c80(&var_58, rbx)
            int16_t* const r8_14 = &data_142d40450
            int16_t* const r10_1 = &data_142d40450
            int32_t var_50
            
            if (var_50 != 0)
                r8_14 = var_58
            
            int32_t var_40
            
            if (var_40 != 0)
                r10_1 = var_48
            
            int64_t r10_2 = r10_1 - r8_14
            
            while (true)
                int16_t rdx_26 = *(r8_14 + r10_2)
                int16_t r9_2 = *r8_14
                r8_14 = &r8_14[1]
                
                if (rdx_26 != r9_2)
                    uint32_t rdx_28
                    
                    if (((zx.d(r9_2) | zx.d(rdx_26)) & 0xffffff80) != 0)
                        rdx_28 = zx.d(rdx_26) - zx.d(r9_2)
                    else
                        uint32_t rcx_46 = zx.d(*(zx.q(r9_2) + &data_142e5e8a0))
                        uint32_t rdx_27 = zx.d(*(zx.q(rdx_26) + &data_142e5e8a0))
                        rdx_28 = rdx_27 - rcx_46
                        
                        if (rdx_27 == rcx_46)
                            continue
                    
                    if (rdx_28 != 0)
                        break
                else if (rdx_26 != 0)
                    continue
                
                sub_140597df0(rbx, &var_88)
                break
            
            if (sub_140a237d0(rbx, &data_142d5a024, 1) == 0)
                sub_140a20ba0(rbx, &data_142d5a024, 1)
            
            int16_t* rcx_50 = var_58
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            int16_t* rcx_51 = var_48
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
            
            int16_t* rcx_52 = var_88
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            int64_t rcx_53 = var_68
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
            
            int64_t rcx_54 = var_38
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
    else
        sub_140a46070(rbx)

if (rbx[1].d == 0)
    return &data_142d40450

return *rbx
