// 函数: sub_142024a50
// 地址: 0x142024a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x11].b != 0)
    return 

void* rax_3 = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rax_3 = arg1[4]

int64_t* rdi_1

switch (zx.d(*(rax_3 + 0x8b8)) - 1)
    case 0
        void var_28
        (*(*arg1 + 0x318))(arg1, arg2, 
            sub_140ac6680(_vfprintf_p_l(&var_28, PAUSED", GameViewportClient")))
        int64_t* var_20
        rdi_1 = var_20
        goto label_142024c03
    case 1
        void var_88
        (*(*arg1 + 0x318))(arg1, arg2, 
            sub_140ac6680(_vfprintf_p_l(&var_88, LOADING", GameViewportClient")))
        int64_t* var_80
        rdi_1 = var_80
    label_142024c03:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rbx_6 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rbx_6 == 1)
                    (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_6))
    case 2
        void var_70
        (*(*arg1 + 0x318))(arg1, arg2, 
            sub_140ac6680(_vfprintf_p_l(&var_70, SAVING", GameViewportClient")))
        int64_t* var_68
        rdi_1 = var_68
        goto label_142024c03
    case 3
        void var_58
        (*(*arg1 + 0x318))(arg1, arg2, 
            sub_140ac6680(_vfprintf_p_l(&var_58, CONNECTING", GameViewportClient")))
        int64_t* var_50
        rdi_1 = var_50
        goto label_142024c03
    case 4
        void var_40
        (*(*arg1 + 0x318))(arg1, arg2, 
            sub_140ac6680(_vfprintf_p_l(&var_40, PRECACHING", GameViewportClient")))
        int64_t* var_38
        rdi_1 = var_38
        goto label_142024c03
    case 5
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        sub_1405947f0(&var_98, 0x16)
        int32_t rax_18 = var_90_1 + 0x16
        var_90_1 = rax_18
        
        if (rax_18 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"Waiting to connect...", 0x2c)
        (*(*arg1 + 0x318))(arg1, arg2, &var_98)
        int64_t rcx_23 = var_98
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
