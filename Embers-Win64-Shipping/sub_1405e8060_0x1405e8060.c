// 函数: sub_1405e8060
// 地址: 0x1405e8060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r13 = arg4
uint64_t result

if (arg2 != 0)
    result = 0x80070057
else if (arg4 == 0 || arg5 == 0)
    result = 0x80004003
else if (arg3 != 1)
    result = 0x80070057
else if (**(arg1 + 0xa8) != 0)
    int64_t* rcx_1 = *(arg1 + 0x68)
    
    if (rcx_1 != 0)
        int32_t result_1 = 0
        void* r15_1 = arg1 + 0xe8
        int64_t* var_178
        
        if (*r15_1 == 0)
            int32_t var_d8 = *(arg1 + 0x48)
            int32_t var_d4_1 = *(arg1 + 0x4c)
            bool cond:0_1 = *(arg1 + 0xb0) != 0x494d767a48617031
            __builtin_memset(&var_178, 0, 0x18)
            int32_t var_d0_1 = 1
            int32_t var_cc_1 = 1
            int32_t var_c8_1
            
            if ((cond:0_1 || *(arg1 + 0xb8) != 0x3790dc259df278b4) &&
                    (*(arg1 + 0xb0) != 0x494d767a48617059 || *(arg1 + 0xb8) != 0x3790dc259df278b4))
                var_c8_1 = 0x57
            else
                var_c8_1 = 0x67
            
            int64_t var_c4_1 = 1
            int32_t var_bc_1 = 0
            int64_t var_b8_1 = 0x20
            int32_t var_b0_1 = 0
            int64_t* var_170
            (*(*rcx_1 + 0x28))(rcx_1, &var_d8, 0, &var_170)
            int64_t* var_168
            int32_t* r8_1
            int64_t* r9_2
            
            if ((*(arg1 + 0xb0) != 0x494d767a48617031 || *(arg1 + 0xb8) != 0x3790dc259df278b4) &&
                    (*(arg1 + 0xb0) != 0x494d767a48617059 || *(arg1 + 0xb8) != 0x3790dc259df278b4))
                r9_2 = &var_168
                int32_t var_100 = var_c8_1
                r8_1 = &var_100
                int64_t var_f4_1 = 0
                int64_t var_fc_1 = 4
            else
                int64_t* rcx_2 = *(arg1 + 0x68)
                int64_t* rdx_1 = var_170
                int64_t var_11c_1 = 0
                int32_t var_128 = 0x3d
                int64_t var_124_1 = 4
                (*(*rcx_2 + 0x48))(rcx_2, rdx_1, &var_128, &var_168)
                r9_2 = &var_178
                int64_t var_11c_2 = 0
                r8_1 = &var_128
                var_128 = 0x31
                int64_t var_124_2 = 4
            
            int64_t* rcx_3 = *(arg1 + 0x68)
            (*(*rcx_3 + 0x48))(rcx_3, var_170, r8_1, r9_2)
            int64_t* rax_17 = j_sub_140a82f30(0x18)
            int64_t* rbx_1 = rax_17
            
            if (rax_17 == 0)
                rbx_1 = nullptr
            else
                __builtin_memset(rax_17, 0, 0x18)
            
            void var_e8
            
            if (r15_1 != &var_e8)
                int64_t* r14_1 = *r15_1
                *r15_1 = rbx_1
                
                if (r14_1 != 0)
                    int64_t* rcx_4 = r14_1[2]
                    
                    if (rcx_4 != 0)
                        (*(*rcx_4 + 0x10))(rcx_4)
                    
                    int64_t* rcx_5 = r14_1[1]
                    
                    if (rcx_5 != 0)
                        (*(*rcx_5 + 0x10))(rcx_5)
                    
                    int64_t* rcx_6 = *r14_1
                    
                    if (rcx_6 != 0)
                        (*(*rcx_6 + 0x10))(rcx_6)
                    
                    j_sub_140a74f90(r14_1)
            else if (rbx_1 != 0)
                int64_t* rcx_7 = rbx_1[2]
                
                if (rcx_7 != 0)
                    (*(*rcx_7 + 0x10))(rcx_7)
                
                int64_t* rcx_8 = rbx_1[1]
                
                if (rcx_8 != 0)
                    (*(*rcx_8 + 0x10))(rcx_8)
                
                int64_t* rcx_9 = *rbx_1
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x10))(rcx_9)
                
                j_sub_140a74f90(rbx_1)
            
            int64_t* rbx_2 = *r15_1
            int64_t* rcx_11 = *rbx_2
            
            if (rcx_11 != var_170)
                if (rcx_11 != 0)
                    (*(*rcx_11 + 0x10))(rcx_11)
                
                *rbx_2 = var_170
                var_170 = nullptr
            
            void* rbx_3 = *r15_1
            int64_t* rcx_12 = var_168
            int64_t* rdx_4 = *(rbx_3 + 8)
            
            if (rdx_4 != rcx_12)
                if (rdx_4 != 0)
                    (*(*rdx_4 + 0x10))(rdx_4)
                    rcx_12 = var_168
                
                *(rbx_3 + 8) = rcx_12
                rcx_12 = nullptr
                var_168 = nullptr
            
            void* rbx_4 = *r15_1
            int64_t* rax_27 = var_178
            int64_t* rdx_5 = *(rbx_4 + 0x10)
            
            if (rdx_5 != rax_27)
                if (rdx_5 != 0)
                    (*(*rdx_5 + 0x10))(rdx_5)
                    rax_27 = var_178
                
                *(rbx_4 + 0x10) = rax_27
                var_178 = nullptr
                rcx_12 = var_168
            else if (rax_27 != 0)
                int64_t rdx_6 = *rax_27
                (*(rdx_6 + 0x10))(rax_27, rdx_6)
                rcx_12 = var_168
            
            if (rcx_12 != 0)
                (*(*rcx_12 + 0x10))(rcx_12)
            
            int64_t* rcx_16 = var_170
            
            if (rcx_16 != 0)
                (*(*rcx_16 + 0x10))(rcx_16)
        
        if (*(arg1 + 0xf0) == 0)
            int64_t rcx_17 = *(arg1 + 0xb0)
            int64_t rcx_18 = rcx_17 - 0x494d767a48617031
            int32_t var_a8 = *(arg1 + 0x48)
            int32_t var_a4_1 = *(arg1 + 0x4c)
            int64_t* var_158 = nullptr
            int64_t* var_148_1 = nullptr
            int32_t var_a0_1 = 1
            int32_t var_9c_1 = 1
            
            if (rcx_17 == 0x494d767a48617031)
                rcx_18 = *(arg1 + 0xb8) + -0x3790dc259df278b4
            
            int64_t var_94_1 = 1
            int64_t* rcx_20 = *(arg1 + 0x68)
            int32_t rax_33 = 0x4d
            int32_t var_8c_1 = 2
            int32_t var_88_1 = 8
            
            if (rcx_18 == 0)
                rax_33 = 0x47
            
            int64_t var_84_1 = 0x10000
            int32_t var_98_1 = rax_33
            (*(*rcx_20 + 0x28))(rcx_20, &var_a8, 0, &var_158)
            sub_1405e6a90(arg1, var_158, &var_a8)
            int64_t* rcx_22 = nullptr
            bool cond:3_1 = *(arg1 + 0xb0) != 0x494d767a4861704d
            int64_t* rdx_9 = nullptr
            int64_t* var_160 = nullptr
            int64_t* var_150_1 = nullptr
            
            if (not(cond:3_1) && *(arg1 + 0xb8) == 0x3790dc259df278b4)
                int64_t* rcx_23 = *(arg1 + 0x68)
                int32_t var_78 = *(arg1 + 0x48)
                int32_t var_74_1 = *(arg1 + 0x4c)
                int32_t var_70_1 = 1
                int32_t var_6c_1 = 1
                int32_t var_68_1 = 0x50
                int64_t var_64_1 = 1
                int32_t var_5c_1 = 2
                int32_t var_58_1 = 8
                int64_t var_54_1 = 0x10000
                (*(*rcx_23 + 0x28))(rcx_23, &var_78, 0, &var_160)
                sub_1405e6a90(arg1, var_160, &var_78)
                rcx_22 = var_160
                rdx_9 = var_150_1
            
            int64_t* rax_40 = var_158
            int64_t* r15_2 = nullptr
            var_178 = nullptr
            int64_t* r12_1 = nullptr
            int64_t* r14_2 = nullptr
            int64_t* r13_1 = nullptr
            
            if (rax_40 != 0)
                r15_2 = rax_40
                var_158 = nullptr
            
            if (rcx_22 != 0)
                r12_1 = rcx_22
                var_160 = nullptr
            
            if (var_148_1 != 0)
                r14_2 = var_148_1
                var_178 = var_148_1
                var_148_1 = nullptr
            
            if (rdx_9 != 0)
                r13_1 = rdx_9
                var_150_1 = nullptr
            
            int64_t* rax_42 = j_sub_140a82f30(0x20)
            int64_t* rbx_5 = rax_42
            
            if (rax_42 == 0)
                rbx_5 = nullptr
            else
                *rax_42 = r15_2
                r15_2 = nullptr
                rax_42[1] = r12_1
                r12_1 = nullptr
                rax_42[2] = r14_2
                r14_2 = nullptr
                rax_42[3] = r13_1
                r13_1 = nullptr
                var_178 = nullptr
            
            void var_e0
            
            if (arg1 + 0xf0 != &var_e0)
                int64_t* r14_3 = *(arg1 + 0xf0)
                *(arg1 + 0xf0) = rbx_5
                
                if (r14_3 != 0)
                    int64_t* rcx_25 = r14_3[3]
                    
                    if (rcx_25 != 0)
                        (*(*rcx_25 + 0x10))(rcx_25)
                    
                    int64_t* rcx_26 = r14_3[2]
                    
                    if (rcx_26 != 0)
                        (*(*rcx_26 + 0x10))(rcx_26)
                    
                    int64_t* rcx_27 = r14_3[1]
                    
                    if (rcx_27 != 0)
                        (*(*rcx_27 + 0x10))(rcx_27)
                    
                    int64_t* rcx_28 = *r14_3
                    
                    if (rcx_28 != 0)
                        (*(*rcx_28 + 0x10))(rcx_28)
                    
                    j_sub_140a74f90(r14_3)
                
                r14_2 = var_178
            else if (rbx_5 != 0)
                int64_t* rcx_44 = rbx_5[3]
                
                if (rcx_44 != 0)
                    (*(*rcx_44 + 0x10))(rcx_44)
                
                int64_t* rcx_45 = rbx_5[2]
                
                if (rcx_45 != 0)
                    (*(*rcx_45 + 0x10))(rcx_45)
                
                int64_t* rcx_46 = rbx_5[1]
                
                if (rcx_46 != 0)
                    (*(*rcx_46 + 0x10))(rcx_46)
                
                int64_t* rcx_47 = *rbx_5
                
                if (rcx_47 != 0)
                    (*(*rcx_47 + 0x10))(rcx_47)
                
                j_sub_140a74f90(rbx_5)
            
            if (r13_1 != 0)
                (*(*r13_1 + 0x10))(r13_1)
            
            if (r14_2 != 0)
                (*(*r14_2 + 0x10))(r14_2)
            
            if (r12_1 != 0)
                (*(*r12_1 + 0x10))(r12_1)
            
            if (r15_2 != 0)
                (*(*r15_2 + 0x10))(r15_2)
            
            if (var_150_1 != 0)
                (*(*var_150_1 + 0x10))(var_150_1)
            
            int64_t* rcx_35 = var_160
            
            if (rcx_35 != 0)
                (*(*rcx_35 + 0x10))(rcx_35)
            
            if (var_148_1 != 0)
                (*(*var_148_1 + 0x10))(var_148_1)
            
            int64_t* rcx_37 = var_158
            
            if (rcx_37 != 0)
                (*(*rcx_37 + 0x10))(rcx_37)
            
            r15_1 = arg1 + 0xe8
            r13 = arg4
        
        EnterCriticalSection(arg1 + 0x10)
        int64_t* var_130 = nullptr
        struct IMFSample ppIMFSample = 0
        MFCreateSample(&ppIMFSample)
        struct IMFSample ppIMFSample_1 = ppIMFSample
        *(r13 + 8) = ppIMFSample_1
        (*(*ppIMFSample_1 + 8))()
        struct IUnknown* rdx_13 = *r15_1
        struct IMFMediaBuffer ppBuffer = 0
        MFCreateDXGISurfaceBuffer(&data_142d5b568, rdx_13->vtable, 0, 0, &ppBuffer)
        struct IMFSample ppIMFSample_2 = ppIMFSample
        (*(*ppIMFSample_2 + 0x150))(ppIMFSample_2, ppBuffer)
        struct IMFMediaBuffer ppBuffer_1 = ppBuffer
        
        if (ppBuffer_1 != 0)
            (*(*ppBuffer_1 + 0x10))(ppBuffer_1)
        
        struct IMFSample ppIMFSample_3 = ppIMFSample
        
        if (ppIMFSample_3 != 0)
            (*(*ppIMFSample_3 + 0x10))(ppIMFSample_3)
        
        int64_t* rcx_40 = *(r13 + 8)
        int32_t result_2 = (*(*rcx_40 + 0x140))(rcx_40, 0, &var_130)
        int64_t* rcx_41 = var_130
        
        if (rcx_41 != 0)
            if (result_2 s>= 0)
                result_2 = sub_1405e7680(arg1, *(r13 + 8))
                rcx_41 = var_130
            
            *(r13 + 0x10) = 0
            *arg5 = 0
            result_1 = result_2
            
            if (rcx_41 != 0)
                int64_t rdx_17 = *rcx_41
                (*(rdx_17 + 0x10))(rcx_41, rdx_17)
        
        if (arg1 != -0x10)
            LeaveCriticalSection(arg1 + 0x10)
        
        result = zx.q(result_1)
    else
        result = 0x80004001
else
    result = 0xc00d6d72

__security_check_cookie(rax_1 ^ &var_1a8)
return result
