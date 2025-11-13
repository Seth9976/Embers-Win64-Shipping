// 函数: ?mtx_do_lock@@YAHPEAPEAU_Mtx_internal_imp_t@@PEBUxtime@@@Z
// 地址: 0x140fc5200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t* rdi = arg1
int32_t rax_3 = (*(*arg2 + 0x30))(arg2)
int64_t r8 = *rdi
uint32_t result

if ((*(r8 + 0x30))(rdi, arg3, r8) != rax_3)
    result.b = 0
else
    int16_t rcx_2 = rdi[1].w
    result = zx.d(arg2[1].w)
    
    if (rcx_2 == result.w)
        result = (*(*rdi + 0x80))(rdi, arg2)
    else if (rcx_2 == 2 || result.w == 2)
        int64_t* rax_5 = rdi
        
        if (rcx_2 != 0x17)
            rax_5 = arg2
        
        if (rcx_2 != 2)
            rdi = arg2
        
        if ((rax_5[2].b != 0xff || (*(rax_5 + 0x11) & 0xf) != 2
                || (*(rdi + 0xc) & 0xf0000000) != 0xe0000000) && rax_5[2].w == 0)
            result = zx.d(*(rax_5 + 0x12))
        
        if ((rax_5[2].b != 0xff || (*(rax_5 + 0x11) & 0xf) != 2
                || (*(rdi + 0xc) & 0xf0000000) != 0xe0000000) && (rax_5[2].w != 0 || result.w != 0 || ((
                *(rax_5 + 0x14) != result.w || *(rax_5 + 0x16) != result.w || rax_5[3].w != result.w
                || *(rax_5 + 0x1a) != result.w || *(rax_5 + 0x1c) != result.w
                || *(rax_5 + 0x1e) != result.w || *(rdi + 0xc) != 0) && (result.w != 0
                || *(rax_5 + 0x14) != result.w || *(rax_5 + 0x16) != result.w
                || rax_5[3].w != result.w || *(rax_5 + 0x1a) != result.w
                || *(rax_5 + 0x1c) != result.w || *(rax_5 + 0x1e) != 0x100
                || *(rdi + 0xc) != 0x7f000001))))
            if (sub_140fcbaa0(&rax_5[2]).b == 0)
                result.b = 0
            else
                int32_t rcx_5 = *(rdi + 0xc)
                int64_t var_20_1 = 0
                var_20_1:5.b = (rcx_5 u>> 8).b
                var_20_1:4.b = rcx_5.b
                var_20_1:2.w = 0xffff
                var_20_1:6.b = (rcx_5 u>> 0x10).b
                var_20_1:7.b = (rcx_5 u>> 0x18).b
                int64_t rdx_1 = 0 - rax_5[2]
                
                if (0 == rax_5[2])
                    rdx_1 = var_20_1 - rax_5[3]
                
                result.b = rdx_1 == 0
        else
            result.b = 1
    else
        result.b = 0

__security_check_cookie(rax_1 ^ &var_48)
return result
