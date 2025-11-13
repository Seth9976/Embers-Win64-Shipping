// 函数: sub_140d350e0
// 地址: 0x140d350e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* rax_2 = *(arg2 + 0x20)
void* rbx = nullptr
int64_t rcx = *(arg2 + 0x18)
*(arg2 + 0x30) = 0
int64_t* rdi = *rax_2
*(arg2 + 0x20) = &rax_2[1]
*(arg2 + 0x38) = 0
uint32_t r8 = zx.d(rax_2[1].b)
*(arg2 + 0x20) = rax_2 + 9
(&data_143e1cd60)[zx.q(r8)](rcx, arg3, 0)

if (*(arg2 + 0x38) == 0)
    void var_48
    int64_t* rax_6 = _vfprintf_p_l(&var_48, u"Attempted to assign to None", u"ScriptCore")
    var_68 = 3
    int64_t var_60_1 = *rax_6
    int64_t* rcx_3 = rax_6[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    int32_t var_50_1 = rax_6[2].d
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rax_10 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    sub_140d30680(arg1, arg2, &var_68)
    
    if (rdi == 0)
        int64_t var_470
        *(arg2 + 0x38) = &var_470
        var_470 = 0
        int64_t var_468_1 = 0
    else
        int32_t rdx_2 = *(rdi + 0x3c) * rdi[7].d
        
        if (rdx_2 != 0)
            int64_t rcx_7 = sx.q(rdx_2 + 0xf)
            int64_t rax_13 = rcx_7 + 0xf
            
            if (rax_13 u<= rcx_7)
                rax_13 = 0xffffffffffffff0
            
            int64_t rax_14 = rax_13 & 0xfffffffffffffff0
            __chkstk(rax_14)
            int32_t var_88
            rbx = (&var_88 - rax_14 + 0x2f) & 0xfffffffffffffff0
        
        if (not(test_bit(zx.q(rdi[8].d), 9)))
            (*(*rdi + 0xf0))(rdi, rbx)
            *(arg2 + 0x38) = rbx
        else
            memset(rbx, 0, sx.q(rdx_2))
            *(arg2 + 0x38) = rbx
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            (**rcx_3)(rcx_3)
            int32_t r15_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (r15_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, zx.q(r15_1))

char* rax_20 = *(arg2 + 0x20)
int64_t r8_3 = *(arg2 + 0x38)
uint32_t rcx_12 = zx.d(*rax_20)
*(arg2 + 0x20) = &rax_20[1]
uint8_t result = (&data_143e1cd60)[zx.q(rcx_12)](*(arg2 + 0x18), arg2, r8_3)

if (rbx != 0 && rdi != 0)
    result = not.b((rdi[8] u>> 0x24).b)
    
    if ((result & 1) != 0)
        result = (*(*rdi + 0xe8))(rdi, rbx)

__security_check_cookie(rax_1 ^ &var_68)
return result
