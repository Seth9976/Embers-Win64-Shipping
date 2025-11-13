// 函数: sub_1421a48a0
// 地址: 0x1421a48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
int32_t result = *(arg1 + 0x48)
int32_t rbx = 0

if (result s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x40))
        
        if (rcx != 0)
            (*(*rcx + 0x260))(rcx)
        
        result = *(arg1 + 0x48)
        rbx += 1
        rdi_1 = &rdi_1[1]
    while (rbx s< result)
    
    if (result s> 0)
        void* rbx_1 = **(arg1 + 0x40)
        int64_t* rcx_1 = *(rbx_1 + 0x48)
        
        if (rcx_1 != 0)
            if ((*(*rcx_1 + 0x350))(rcx_1) != 0)
                void var_3d8
                sub_1421a91f0(&var_3d8)
                int64_t* rcx_3 = *(rbx_1 + 0x48)
                (*(*rcx_3 + 0x348))(rcx_3, &var_3d8)
                int64_t var_d8
                
                if (var_d8 != 0)
                    sub_140a74f90(var_d8)
                
                int64_t var_f8
                
                if (var_f8 != 0)
                    sub_140a74f90(var_f8)
                
                int64_t var_118
                
                if (var_118 != 0)
                    sub_140a74f90(var_118)
                
                int64_t var_148
                
                if (var_148 != 0)
                    sub_140a74f90(var_148)
                
                int64_t var_168
                
                if (var_168 != 0)
                    sub_140a74f90(var_168)
                
                int64_t var_1a0
                
                if (var_1a0 != 0)
                    sub_140a74f90(var_1a0)
                
                int64_t var_1c0
                
                if (var_1c0 != 0)
                    sub_140a74f90(var_1c0)
                
                int64_t var_1e0
                
                if (var_1e0 != 0)
                    sub_140a74f90(var_1e0)
                
                int64_t var_218
                
                if (var_218 != 0)
                    sub_140a74f90(var_218)
                
                int64_t var_248
                
                if (var_248 != 0)
                    sub_140a74f90(var_248)
                
                int64_t var_290
                
                if (var_290 != 0)
                    sub_140a74f90(var_290)
                
                int64_t var_2c0
                
                if (var_2c0 != 0)
                    sub_140a74f90(var_2c0)
                
                int64_t var_308
                
                if (var_308 != 0)
                    sub_140a74f90(var_308)
                
                int64_t var_328
                
                if (var_328 != 0)
                    sub_140a74f90(var_328)
                
                int64_t var_348
                
                if (var_348 != 0)
                    sub_140a74f90(var_348)
                
                int64_t var_368
                
                if (var_368 != 0)
                    sub_140a74f90(var_368)
                
                int64_t var_388
                
                if (var_388 != 0)
                    sub_140a74f90(var_388)
                
                int64_t var_3a8
                
                if (var_3a8 != 0)
                    sub_140a74f90(var_3a8)
                
                int64_t var_3c0
                
                if (var_3c0 != 0)
                    sub_140a74f90(var_3c0)
            
            int64_t* rcx_23 = *(rbx_1 + 0x48)
            (*(*rcx_23 + 0x360))(rcx_23, arg1)
        
        result = sub_142187150(arg1)

__security_check_cookie(rax_1 ^ &var_3f8)
return result
