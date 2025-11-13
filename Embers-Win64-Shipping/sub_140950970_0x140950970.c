// 函数: sub_140950970
// 地址: 0x140950970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x60)
int64_t arg_8 = 0
int64_t arg_20 = 0
int64_t rcx = data_143f5b298
int128_t var_48 = zx.o(0)
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&arg_20)
wchar16 const* const var_30 = u"CacheAchievements or CacheAchievementDescriptions"

if (rax == 0)
    int64_t arg_10 = 0
    int16_t* var_58
    sub_140a2e390(&var_58, %s - Invalid or uninitialized OnlineSubsystem", 
        CacheAchievements or CacheAchievementDescriptions")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        rcx_3 = var_58
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_58
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_48, sub_140d3c6e0(arg1 + 0x50))
int64_t rdi = var_48.q
void*** result

if (rdi == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_68
    (*(*rax + 0xb0))(rax, &var_68)
    int64_t* var_60
    
    if (var_68 == 0)
        int64_t arg_18 = 0
        sub_140d23f50(u"Achievements not supported by Online Subsystem", 3)
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rbx_3 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_60 + 8))(var_60, zx.q(rbx_3))
        
        result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        void*** result_1 = nullptr
        void*** result_2 = sub_140a84c80(0, 0x30, 0)
        result_1 = result_2
        int32_t var_70_1 = 3
        
        if (result_2 != 0)
            *result_2 = &data_142e334f8
            sub_140d3a3a0(&result_2[1], arg1)
            result_2[2] = sub_14096e630
            result_2[4] = sub_140a387b0()
            *result_2 = &data_142e33550
        
        void**** r8_2 = &result_1
        int64_t* rcx_9 = var_68
        int64_t rax_4 = *rcx_9
        
        if (*(arg1 + 0x58) == 0)
            result = (*(rax_4 + 0x10))(rcx_9, rdi, r8_2)
        else
            result = (*(rax_4 + 0x18))(rcx_9, rdi, r8_2)
        
        if (var_70_1 == 0)
            result = result_1
        label_140950af9:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            void*** result_3 = result_1
            
            if (result_3 != 0)
                (*result_3)[7](result_3, 0)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_70_2 = 0
                goto label_140950af9
        
        if (var_60 != 0)
            result = zx.q(var_60[1].d)
            var_60[1].d -= 1
            
            if (result.d == 1)
                result = (**var_60)(var_60)
                int32_t rbx_2 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*var_60 + 8))(var_60, zx.q(rbx_2))

int64_t* rbx_4 = var_48:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
