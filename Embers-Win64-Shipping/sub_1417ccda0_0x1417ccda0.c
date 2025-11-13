// 函数: sub_1417ccda0
// 地址: 0x1417ccda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
uint64_t result = __security_cookie ^ &var_2b8
uint64_t result_1 = result
int32_t rbx = arg2

if (arg2 != 0xc0)
    if (rbx == 0x20 && strstr(arg3, "cleaning the mesh failed") != 0)
        rbx = 2
    
    goto label_1417cce29

int32_t rcx = data_1439b9908

if (rcx != 0xffffffff)
    result = zx.q(data_143ef8558 + 1)
    data_143ef8558 = result.d
    
    if (result.d s> rcx)
    label_1417cce29:
        void var_148
        sub_1405eb940(&var_148, arg3)
        int64_t var_288
        int64_t* rax_3 = sub_1417c8cf0(&var_288, rbx)
        int16_t* const rbx_1
        
        if (rax_3[1].d == 0)
            rbx_1 = &data_142d40450
        else
            rbx_1 = *rax_3
        
        void var_268
        sub_1405eb940(&var_268, arg4)
        int64_t var_40
        int64_t var_290_1 = var_40
        int16_t* const var_298_1 = rbx_1
        int64_t var_278
        int64_t var_160
        result = sub_140a2e390(&var_278, u"PHYSX: (%s %d) %s : %s", var_160)
        int64_t var_168
        
        if (var_168 != 0)
            result = sub_140a74f90(var_168)
        
        int64_t rcx_7 = var_288
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t var_48
        
        if (var_48 != 0)
            result = sub_140a74f90(var_48)
        
        int64_t rcx_9 = var_278
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)

__security_check_cookie(result_1 ^ &var_2b8)
return result
