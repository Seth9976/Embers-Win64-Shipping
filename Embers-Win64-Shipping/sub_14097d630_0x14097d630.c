// 函数: sub_14097d630
// 地址: 0x14097d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax_1

if (arg2 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg2 + 0x150))(arg2)

sub_140d3a3a0(arg1 + 0x64, rax_1)

if (arg2 == 0 || arg2[0x45] == 0)
    int64_t var_f8 = 0
    return sub_140d23f50(UInAppPurchaseCallbackProxy::Trigger - Invalid player state", 3) __tailcall

int64_t arg_8 = 0
void var_e0
int64_t* rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b58170(&var_e0, "OnlineSubsystem", 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1) != 0)
    void var_d8
    int64_t rbx_1 = *sub_140b58170(&var_d8, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_1)
    int64_t r8_1 = *rax_5
    
    if ((*(r8_1 + 0x70))(rax_5, 0, r8_1) != 0)
        int64_t arg_10 = 0
        int64_t* rax_7 = sub_14093f850(&arg_10)
        
        if (rax_7 != 0)
            int64_t r8_2 = *rax_7
            void var_d0
            int64_t* rax_8 = (*(r8_2 + 0xa0))(rax_7, &var_d0, r8_2)
            
            if (arg1 + 0x90 != rax_8)
                *(arg1 + 0x90) = *rax_8
                *rax_8 = 0
                sub_1405aeff0(arg1 + 0x98, &rax_8[1])
            
            int64_t* var_c8
            
            if (var_c8 != 0)
                var_c8[1].d -= 1
                
                if (var_c8[1].d == 1)
                    (**var_c8)(var_c8)
                    int32_t rax_11 = *(var_c8 + 0xc)
                    *(var_c8 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*var_c8 + 8))(var_c8, 1)
            
            if (*(arg1 + 0x90) == 0)
                int64_t arg_18 = 0
                return sub_140d23f50(UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not "
                "supported by Online Subsystem", 3)
            
            int64_t rdx_9 = 0
            void** var_c0
            void* rcx_13 = sub_1420fc400(sub_14226dd50(arg2), &var_c0)[1]
            int64_t* rbx_3 = *(rcx_13 + 0x10)
            
            if (rbx_3 != 0)
                int32_t rax_15 = rbx_3[1].d
                
                if (rax_15 != 0)
                    rbx_3[1].d = rax_15 + 1
                    rax_15.b = 1
                
                if (rax_15.b == 0)
                    rbx_3 = nullptr
                
                if (rbx_3 != 0)
                    rdx_9 = *(rcx_13 + 8)
                    rbx_3[1].d += 1
            
            void var_98
            int64_t rax_18
            int64_t* rcx_15
            
            if (arg1 + 0x80 != &var_98)
                *(arg1 + 0x80) = rdx_9
                int64_t* rdi_1 = *(arg1 + 0x88)
                
                if (rbx_3 == rdi_1)
                    goto label_14097d829
                
                *(arg1 + 0x88) = rbx_3
                
                if (rdi_1 == 0)
                    goto label_14097d850
                
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d != 1)
                    goto label_14097d850
                
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 != 1)
                    goto label_14097d850
                
                rax_18 = *rdi_1
                rcx_15 = rdi_1
                goto label_14097d84d
            
        label_14097d829:
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d != 1)
                    goto label_14097d850
                
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    goto label_14097d850
                
                rax_18 = *rbx_3
                rcx_15 = rbx_3
            label_14097d84d:
                (*(rax_18 + 8))(rcx_15, 1)
            label_14097d850:
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp8_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            
            var_c0 = &data_142e259e0
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            int64_t* var_b0
            
            if (var_b0 != 0)
                var_b0[1].d -= 1
                
                if (var_b0[1].d == 1)
                    (**var_b0)(var_b0)
                    int32_t temp7_1 = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_b0 + 8))(var_b0, 1)
            
            void*** rax_24 = j_sub_140a82f30(0x40)
            
            if (rax_24 == 0)
                rax_24 = nullptr
            else
                rax_24[1].d = 1
                *rax_24 = &data_142e21830
                *(rax_24 + 0xc) = 1
                rax_24[2] = &data_142e20698
                __builtin_memset(&rax_24[3], 0, 0x11)
                rax_24[6] = 0
                rax_24[7] = 0
            
            void* var_f0_1 = &rax_24[2]
            void* rdx_10
            rdx_10.b = 1
            void var_88
            int32_t result = sub_14096aff0(arg1, sub_14093c750(&var_88, rdx_10.b))
            int64_t* var_58
            
            if (var_58 != 0)
                result = var_58[1].d
                var_58[1].d -= 1
                
                if (result == 1)
                    result = (**var_58)(var_58)
                    int32_t rsi_1 = *(var_58 + 0xc)
                    *(var_58 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        result = (*(*var_58 + 8))(var_58, zx.q(rsi_1))
            
            int64_t var_70
            
            if (var_70 != 0)
                result = sub_140a74f90(var_70)
            
            int64_t var_80
            
            if (var_80 != 0)
                result = sub_140a74f90(var_80)
            
            if (rax_24 != 0)
                rax_24[1].d -= 1
                
                if (rax_24[1].d == 1)
                    result = (**rax_24)(rax_24)
                    int32_t temp10_1 = *(rax_24 + 0xc)
                    *(rax_24 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        return (*rax_24)[1](rax_24, 1)
            
            return result

int64_t arg_20 = 0
return sub_140d23f50(
    UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem", 3)
