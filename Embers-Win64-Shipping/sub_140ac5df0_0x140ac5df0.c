// 函数: sub_140ac5df0
// 地址: 0x140ac5df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg1)
int64_t var_18
int32_t var_10
int32_t rbx_2

if (rax.d u<= 5)
    switch (rax)
        case 0
            sub_140a2e390(&var_18, u"%lld", *(arg1 + 8))
            
            if (var_10 == 0)
            label_140ac5f9c:
                rbx_2 = 0
                goto label_140ac5fa9
            
            rbx_2 = var_10 - 1
        label_140ac5fa9:
            rax = sub_140a20ba0(arg2, var_18, rbx_2)
            int64_t rcx_13 = var_18
            
            if (rcx_13 != 0)
                return sub_140a74f90(rcx_13)
        case 1
            sub_140a2e390(&var_18, u"%llu", *(arg1 + 8))
            int32_t r8_6
            
            if (var_10 == 0)
                r8_6 = 0
            else
                r8_6 = var_10 - 1
            
            sub_140a20ba0(arg2, var_18, r8_6)
            int64_t rcx_3 = var_18
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int32_t rdx_1 = arg2[1].d
            int32_t rax_1
            rax_1.b = rdx_1 s<= 0
            int32_t rsi = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                rsi = 0
            
            int32_t rax_3 = rax_1 + 1 + rdx_1
            arg2[1].d = rax_3
            
            if (rax_3 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_5 = sx.q(rsi)
            *(*arg2 + (rcx_5 << 1)) = 0x75
            int64_t rax_5 = *arg2
            *(rax_5 + (rcx_5 << 1) + 2) = 0
            return rax_5
        case 2
            arg3.o = arg1[2]
            arg3.o = _mm_cvtps_pd(arg3.q)
            sub_140a2e390(&var_18, u"%f", arg3.q)
            int32_t r8_9
            
            if (var_10 == 0)
                r8_9 = 0
            else
                r8_9 = var_10 - 1
            
            sub_140a20ba0(arg2, var_18, r8_9)
            int64_t rcx_8 = var_18
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int32_t rdx_3 = arg2[1].d
            int32_t rax_6
            rax_6.b = rdx_3 s<= 0
            int32_t rsi_1 = rdx_3 - 1
            
            if (rdx_3 s<= 0)
                rsi_1 = 0
            
            int32_t rax_8 = rax_6 + 1 + rdx_3
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_10 = sx.q(rsi_1)
            *(*arg2 + (rcx_10 << 1)) = 0x66
            int64_t rax_10 = *arg2
            *(rax_10 + (rcx_10 << 1) + 2) = 0
            return rax_10
        case 3
            arg3.o = zx.o(*(arg1 + 8))
            sub_140a2e390(&var_18, u"%f", arg3.q)
            
            if (var_10 == 0)
                goto label_140ac5f9c
            
            rbx_2 = var_10 - 1
            goto label_140ac5fa9
        case 4
            void* r8_2
            r8_2.b = 1
            return sub_140aca310(arg2, &arg1[4], r8_2.b, arg4, arg3) __tailcall
        case 5
            uint32_t rbx_4 = zx.d(arg1[2].b)
            sub_140a20ba0(arg2, u"ETextGender::", 0xd)
            wchar16 const* const rdx_7
            
            if (rbx_4.b == 0)
                rdx_7 = u"Masculine"
            else if (rbx_4 == 1)
                rdx_7 = u"Feminine"
            else if (rbx_4 == 2)
                rdx_7 = u"Neuter"
            else
                rdx_7 = u"<Unknown ETextGender>"
            
            int64_t r8_13 = -1
            
            do
                r8_13 += 1
            while (rdx_7[r8_13] != 0)
            
            return sub_140a20ba0(arg2, rdx_7, r8_13.d)
return rax
