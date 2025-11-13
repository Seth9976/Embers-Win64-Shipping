// 函数: sub_140cf6ba0
// 地址: 0x140cf6ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b63aa0(arg2 + 8)
char arg_10
uint32_t rax_10

if (rax != 0)
    switch (*rax - 1)
        case 0
            if (*(arg2 + 0x24) == 0)
                goto label_140cf6c00
            
            goto label_140cf6db8
        case 1
            int64_t* r9_2 = *(*arg3 + 8)
            int64_t* rcx_7 = r9_2[1]
            int32_t* rdx_5 = *rcx_7
            
            if (&rdx_5[1] u> rcx_7[1])
                char* rdx_6 = &arg_10
                
                if ((*(r9_2 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_2, rdx_6, arg6)
                    arg5 = zx.q(arg_10.d)
                else
                    (*(*r9_2 + 0x150))(r9_2, rdx_6, 4)
                    arg5 = zx.q(arg_10.d)
            else
                arg_10.d = *rdx_5
                int64_t* rax_24 = r9_2[1]
                *rax_24 += 4
                arg5 = zx.q(arg_10.d)
            
            goto label_140cf6c42
        case 3
            sub_140cef9b0(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 7
            int64_t* r9_8 = *(*arg3 + 8)
            int64_t* rcx_17 = r9_8[1]
            int64_t* rdx_15 = *rcx_17
            
            if (&rdx_15[1] u> rcx_17[1])
                int64_t* rdx_16 = &arg_10
                
                if ((*(r9_8 + 0x29) & 0x20) != 0)
                    sub_140b540d0(r9_8, rdx_16, arg6)
                    arg5 = arg_10.q
                else
                    (*(*r9_8 + 0x150))(r9_8, rdx_16, 8)
                    arg5 = arg_10.q
            else
                arg_10.q = *rdx_15
                int64_t* rax_40 = r9_8[1]
                *rax_40 += 8
                arg5 = arg_10.q
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg5
            return 2
        case 0x13
            int64_t* r9_3 = *(*arg3 + 8)
            int64_t* rcx_9 = r9_3[1]
            int64_t* rdx_7 = *rcx_9
            
            if (&rdx_7[1] u> rcx_9[1])
                char* rdx_8 = &arg_10
                
                if ((*(r9_3 + 0x29) & 0x20) != 0)
                    sub_140b540d0(r9_3, rdx_8, arg6)
                    arg5 = float.d(arg_10.q)
                else
                    (*(*r9_3 + 0x150))(r9_3, rdx_8, 8)
                    arg5 = float.d(arg_10.q)
            else
                arg_10.q = *rdx_7
                int64_t* rax_29 = r9_3[1]
                *rax_29 += 8
                arg5 = float.d(arg_10.q)
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg5
            return 2
        case 0x15
            int64_t* r9_1 = *(*arg3 + 8)
            int64_t* rcx_5 = r9_1[1]
            int16_t* rdx_3 = *rcx_5
            
            if (&rdx_3[1] u> rcx_5[1])
                char* rdx_4 = &arg_10
                
                if ((*(r9_1 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_1, rdx_4, arg6)
                    rax_10 = sx.d(arg_10.w)
                else
                    (*(*r9_1 + 0x150))(r9_1, rdx_4, 2)
                    rax_10 = sx.d(arg_10.w)
            else
                arg_10.w = *rdx_3
                int64_t* rax_19 = r9_1[1]
                *rax_19 += 2
                rax_10 = sx.d(arg_10.w)
            
            goto label_140cf6c3e
        case 0x16
        label_140cf6c00:
            int64_t* r9 = *(*arg3 + 8)
            int64_t* rcx_3 = r9[1]
            char* rdx = *rcx_3
            
            if (&rdx[1] u> rcx_3[1])
                (*(*r9 + 0x150))(r9, &arg_10, 1)
            else
                arg_10 = *rdx
                int64_t* rax_8 = r9[1]
                *rax_8 += 1
            
            rax_10 = sx.d(arg_10)
        label_140cf6c3e:
            arg5 = zx.q(rax_10)
        label_140cf6c42:
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                _mm_cvtepi32_pd(arg5)
            return 2
        case 0x17
            sub_140cf02e0(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x18
            sub_140cef5f0(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x19
            int64_t* r9_4 = *(*arg3 + 8)
            int64_t* rcx_12 = r9_4[1]
            int16_t* rdx_10 = *rcx_12
            
            if (&rdx_10[1] u> rcx_12[1])
                int16_t* rdx_11 = &arg_10
                
                if ((*(r9_4 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_4, rdx_11, arg6)
                    rax_10 = zx.d(arg_10.w)
                else
                    (*(*r9_4 + 0x150))(r9_4, rdx_11, 2)
                    rax_10 = zx.d(arg_10.w)
            else
                arg_10.w = *rdx_10
                int64_t* rax_35 = r9_4[1]
                *rax_35 += 2
                rax_10 = zx.d(arg_10.w)
            
            goto label_140cf6c3e
        case 0x21
        label_140cf6db8:
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                float.d(sub_140d0ba50(arg3, arg7, arg2))
            return 2
return 0
