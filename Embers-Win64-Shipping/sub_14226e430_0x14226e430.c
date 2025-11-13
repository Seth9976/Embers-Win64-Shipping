// 函数: sub_14226e430
// 地址: 0x14226e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_34 = 0
int64_t arg_20
int32_t var_38 = *sub_140b5e500(&arg_20, 0x142)
char rax_1 = sub_141f8dba0(arg1, var_38.q)
char rax_3

if (rax_1 != 0 && arg1[0x1e].b == 3)
    rax_3 = (*(*arg1 + 0x6a8))(arg1)

int32_t result

if (rax_1 == 0 || arg1[0x1e].b != 3 || rax_3 != 0)
    int64_t* rcx_3 = arg1[0x57]
    
    if (rcx_3 != 0 && not(0f f>= rcx_3[0x34c].d))
        return (*(*rcx_3 + 0x6f8))(zx.o(0), arg2, arg3)
    
    void* rax_7 = (*(*arg1 + 0x698))(arg1)
    int32_t var_30
    int64_t var_28
    
    if (rax_7 == 0)
        sub_141f8ac70(arg1, arg2, arg3)
        var_38.q = 0
        var_30 = 0
        sub_1405947f0(&var_38, 5)
        int32_t rax_17 = var_30 + 5
        var_30 = rax_17
        
        if (rax_17 s> 0)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38.q, u"None", 0xa)
    else
        void* rax_8 = *(rax_7 + 0x130)
        uint128_t zmm0_1
        uint128_t zmm1_1
        
        if (rax_8 == 0)
            var_38.q = data_143dbb1f8.q
            var_30 = data_143dbb200
        else
            zmm1_1 = *(rax_8 + 0x1d0)
            var_38 = zmm1_1.d
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_30 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
            int32_t var_34_1 = zmm0_1.d
        
        *arg2 = var_38.q
        arg2[1].d = var_30
        void* rbx_1 = *(rax_7 + 0x130)
        int32_t rax_14
        
        if (rbx_1 == 0)
            zmm0_1 = zx.o(data_143dbb208)
            rax_14 = data_143dbb210
        else
            zmm1_1 = *(rbx_1 + 0x1c0)
            uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1_1, 4))
            var_28.o = zmm1_1
            
            if (temp0_4 != 0)
                *(rbx_1 + 0x180) = zmm1_1
                int32_t* rax_12 = sub_140adf5d0(&var_28, &var_38)
                *(rbx_1 + 0x190) = *rax_12
                *(rbx_1 + 0x198) = rax_12[2]
            
            zmm0_1 = zx.o(*(rbx_1 + 0x190))
            rax_14 = *(rbx_1 + 0x198)
        
        var_30 = rax_14
        var_38.q = zmm0_1.q
        *arg3 = var_38.q
        arg3[1].d = var_30
        arg_20 = *(rax_7 + 0x18)
        sub_140b63b70(&arg_20, &var_38)
    
    int16_t* const rbx_2 = &data_142d40450
    int16_t* const r8_2 = &data_142d40450
    
    if (var_30 != 0)
        r8_2 = var_38.q
    
    sub_140a2e390(&var_28, APlayerController::GetPlayerViewPoint: out_Location, ViewTarget=%s", 
        r8_2)
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_38.q
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (rax_7 != 0)
        arg_20 = *(rax_7 + 0x18)
        sub_140b63b70(&arg_20, &var_38)
    else
        var_38.q = 0
        var_30 = 0
        sub_1405947f0(&var_38, (rax_7 + 5).d)
        int32_t rax_18 = var_30 + 5
        var_30 = rax_18
        
        if (rax_18 s> 0)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38.q, u"None", 0xa)
    
    if (var_30 != 0)
        rbx_2 = var_38.q
    
    result =
        sub_140a2e390(&var_28, APlayerController::GetPlayerViewPoint: out_Rotation, ViewTarget=%s", 
        rbx_2)
    int64_t rcx_19 = var_28
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_38.q
    
    if (rcx_20 != 0)
        return sub_140a74f90(rcx_20)
else
    *arg2 = arg1[0x63]
    arg2[1].d = arg1[0x64].d
    *arg3 = *(arg1 + 0x324)
    result = *(arg1 + 0x32c)
    arg3[1].d = result

return result
