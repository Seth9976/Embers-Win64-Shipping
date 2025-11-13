// 函数: sub_14225d800
// 地址: 0x14225d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rbx = arg2
int64_t* result

if (arg2 == 0)
    result = nullptr
else
    void* rax_2 = sub_1424a20d0()
    
    if (rax_2 == 0)
        result = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> rbx[7].d || *(rbx[6] + (rax_3 << 3)) != rax_2 + 0x30)
            result = nullptr
        else
            void* rax_5 = sub_1424a20d0()
            int64_t rax_6
            
            if (rax_5 != 0)
                rax_6 = sx.q(*(rax_5 + 0x38))
            
            int64_t* rdi_1
            
            if (rax_5 == 0 || rax_6.d s> rbx[7].d || *(rbx[6] + (rax_6 << 3)) != rax_5 + 0x30)
                rdi_1 = nullptr
            else
                rdi_1 = rbx
            
            void* rax_9 = rdi_1[0x23]
            
            if (rax_9 != 0)
                if ((*(rax_9 + 0x2c4) & 1) != 0)
                    goto label_14225d8fe
                
                goto label_14225d8c7
            
            (*(*rdi_1 + 0x390))(rdi_1)
            rax_9 = rdi_1[0x23]
            
            if (rax_9 == 0 || (*(rax_9 + 0x2c4) & 1) != 0)
            label_14225d8fe:
                void var_78
                sub_142427eb0(&var_78)
                int64_t* rcx_6 = arg1[0x44]
                int64_t var_68_1 = (*(*rcx_6 + 0x698))(rcx_6)
                int32_t var_4c
                int32_t var_4c_1 = var_4c | 0x40
                int64_t var_60_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
                char var_50_1 = 1
                void* rax_14
                int32_t zmm0_1
                rax_14, zmm0_1 = sub_1424a20d0()
                int64_t rax_15
                
                if (rax_14 != 0)
                    rax_15 = sx.q(*(rax_14 + 0x38))
                
                int64_t* rdi_3
                
                if (rax_14 == 0 || rax_15.d s> rbx[7].d
                        || *(rbx[6] + (rax_15 << 3)) != rax_14 + 0x30)
                    rdi_3 = nullptr
                else
                    rdi_3 = rbx
                
                void* rbp_1 = rdi_3[0x23]
                
                if (rbp_1 == 0)
                    (*(*rdi_3 + 0x390))(rdi_3)
                    rbp_1 = rdi_3[0x23]
                
                void var_98
                void var_88
                (*(*arg1 + 0x6f8))(arg1, &var_88, &var_98)
                (*(*arg1 + 0x6c0))(arg1)
                void var_48
                uint128_t zmm6_1
                float zmm7_1[0x4]
                float zmm9_1[0x4]
                zmm6_1, zmm7_1, zmm9_1 = sub_1421915f0(&var_48, rbp_1, &var_88, &var_98, zmm0_1)
                void* rax_20 = sub_1424a20d0()
                int64_t rax_21
                
                if (rax_20 != 0)
                    rax_21 = sx.q(*(rax_20 + 0x38))
                
                if (rax_20 == 0 || rax_21.d s> rbx[7].d
                        || *(rbx[6] + (rax_21 << 3)) != rax_20 + 0x30)
                    rbx = nullptr
                
                void* result_2 = sub_1420eeee0((*(*arg1 + 0x150))(arg1), rbx, &var_48, &var_78, 
                    zmm6_1, zmm7_1, zmm9_1)
                
                if (result_2 != 0)
                    (*(*result_2 + 0x640))(result_2, arg1)
                    int64_t rbx_1 = sx.q(arg1[0x4cf].d)
                    int32_t rax_26 = (rbx_1 + 1).d
                    arg1[0x4cf].d = rax_26
                    
                    if (rax_26 s> *(arg1 + 0x267c))
                        sub_1405a4d70(&arg1[0x4ce])
                    
                    *(arg1[0x4ce] + (rbx_1 << 3)) = result_2
                
                result = result_2
            else
            label_14225d8c7:
                int64_t* result_1 = (*(*arg1 + 0x768))(arg1, rbx)
                
                if (result_1 == 0)
                    goto label_14225d8fe
                
                int64_t rdx_3 = *result_1
                (*(rdx_3 + 0x648))(result_1, rdx_3)
                result = result_1

__security_check_cookie(rax_1 ^ &var_c8)
return result
