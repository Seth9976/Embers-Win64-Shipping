// 函数: sub_14296ac20
// 地址: 0x14296ac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r12 = arg5
int64_t* var_80 = r12
int32_t result = sub_142898c70(arg1)
int32_t r14 = 0
int32_t result_1 = result

if (result s> 0)
    do
        int32_t* rax_2 = sub_142898ea0(arg1, r14)
        int64_t* rbp_1 = nullptr
        
        if (r12 != 0)
            rbp_1 = sub_1428ae170(r12, *(rax_2 + 0x18), *(rax_2 + 0x20))
        
        sub_1428b6f70(arg2, "%*sSigned Certificate Timestamp:", zx.q(arg3))
        int64_t r8_3 = sub_1428b6f70(arg2, "\n%*sVersion   : ", zx.q(arg3 + 4))
        int32_t rax_4
        void* r9_3
        
        if (*rax_2 == 0)
            sub_1428b6f70(arg2, "v1 (0x0)", r8_3)
            
            if (rbp_1 != 0)
                int32_t var_98
                var_98.q = sub_140687ad0(rbp_1)
                sub_1428b6f70(arg2, "\n%*sLog       : %s", zx.q(arg3 + 4))
            
            sub_1428b6f70(arg2, "\n%*sLog ID    : ", zx.q(arg3 + 4))
            sub_142921980(arg2, arg3 + 0x10, 0x10, *(rax_2 + 0x18), rax_2[8])
            sub_1428b6f70(arg2, "\n%*sTimestamp : ", zx.q(arg3 + 4))
            int64_t r12_1 = *(rax_2 + 0x28)
            int32_t* rax_7 = sub_1428c34f0()
            
            if (rax_7 != 0)
                sub_1428e5500(rax_7, 0, (r12_1 u/ 0x5265c00).d, (r12_1 u% 0x5265c00 u/ 0x3e8).d)
                int32_t var_98_2 = (r12_1 u% 0x3e8).d
                char var_70[0x18]
                sub_1428b7080(&var_70, 0x14, "%.14s.%03dZ", sub_14060aa50(rax_7))
                
                if (sub_1428e55f0(rax_7, &var_70) != 0)
                    sub_1428e55c0(arg2, rax_7)
                
                sub_1428c3460(rax_7)
            
            int64_t r8_14 = sub_1428b6f70(arg2, "\n%*sExtensions: ", zx.q(arg3 + 4))
            int64_t rax_20 = *(rax_2 + 0x38)
            
            if (rax_20 != 0)
                sub_142921980(arg2, arg3 + 0x10, 0x10, *(rax_2 + 0x30), rax_20.d)
            else
                sub_1428b6f70(arg2, "none", r8_14)
            
            sub_1428b6f70(arg2, "\n%*sSignature : ", zx.q(arg3 + 4))
            int32_t rax_21 = sub_1428ad4b0(rax_2)
            
            if (rax_21 != 0)
                sub_1428b6f70(arg2, "%s", sub_1428a94b0(rax_21))
            else
                *(rax_2 + 0x41)
                sub_1428b6f70(arg2, "%02X%02X", zx.q(rax_2[0x10].b))
            
            sub_1428b6f70(arg2, "\n%*s            ", zx.q(arg3 + 4))
            r9_3 = *(rax_2 + 0x48)
            rax_4 = rax_2[0x14]
            r12 = var_80
        else
            sub_1428b6f70(arg2, "unknown\n%*s", zx.q(arg3 + 0x10))
            r9_3 = *(rax_2 + 8)
            rax_4 = rax_2[4]
        
        sub_142921980(arg2, arg3 + 0x10, 0x10, r9_3, rax_4)
        result = sub_142898c70(arg1) - 1
        
        if (r14 s< result)
            result = sub_1428b6f70(arg2, "%s", arg4)
        
        r14 += 1
    while (r14 s< result_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
