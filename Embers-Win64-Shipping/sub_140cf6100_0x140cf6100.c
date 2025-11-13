// 函数: sub_140cf6100
// 地址: 0x140cf6100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b63aa0(arg2 + 8)
char arg_10
uint32_t r8

if (rax != 0)
    switch (*rax - 1)
        case 0
            if (*(arg2 + 0x24) == 0)
                goto label_140cf6160
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                sub_140d0ba50(arg3, arg7, arg2)
            return 2
        case 1
            int64_t* r9_2 = *(*arg3 + 8)
            int64_t* rcx_7 = r9_2[1]
            int32_t* rdx_5 = *rcx_7
            
            if (&rdx_5[1] u> rcx_7[1])
                char* rdx_6 = &arg_10
                
                if ((*(r9_2 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_2, rdx_6, arg6)
                else
                    (*(*r9_2 + 0x150))(r9_2, rdx_6, 4)
            else
                arg_10.d = *rdx_5
                int64_t* rax_23 = r9_2[1]
                *rax_23 += 4
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10.d
            return 2
        case 3
            sub_140cef870(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 7
            sub_140cefd00(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x13
            int64_t* r9_3 = *(*arg3 + 8)
            int64_t* rcx_9 = r9_3[1]
            int64_t* rdx_9 = *rcx_9
            
            if (&rdx_9[1] u> rcx_9[1])
                int64_t* rdx_10 = &arg_10
                
                if ((*(r9_3 + 0x29) & 0x20) != 0)
                    sub_140b540d0(r9_3, rdx_10, arg6)
                    *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                        arg_10.d
                    return 2
                
                (*(*r9_3 + 0x150))(r9_3, rdx_10, 8)
            else
                arg_10.q = *rdx_9
                int64_t* rax_31 = r9_3[1]
                *rax_31 += 8
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10.d
            return 2
        case 0x15
            int64_t* r9_1 = *(*arg3 + 8)
            int64_t* rcx_5 = r9_1[1]
            int16_t* rdx_3 = *rcx_5
            
            if (&rdx_3[1] u> rcx_5[1])
                char* rdx_4 = &arg_10
                
                if ((*(r9_1 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_1, rdx_4, arg6)
                    r8 = sx.d(arg_10.w)
                else
                    (*(*r9_1 + 0x150))(r9_1, rdx_4, 2)
                    r8 = sx.d(arg_10.w)
            else
                arg_10.w = *rdx_3
                int64_t* rax_18 = r9_1[1]
                *rax_18 += 2
                r8 = sx.d(arg_10.w)
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = r8
            return 2
        case 0x16
        label_140cf6160:
            int64_t* r9 = *(*arg3 + 8)
            int64_t* rcx_3 = r9[1]
            char* rdx = *rcx_3
            
            if (&rdx[1] u> rcx_3[1])
                (*(*r9 + 0x150))(r9, &arg_10, 1)
            else
                arg_10 = *rdx
                int64_t* rax_8 = r9[1]
                *rax_8 += 1
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = sx.d(arg_10)
            return 2
        case 0x17
            sub_140cf0190(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x18
            sub_140cef4b0(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x19
            int64_t* r9_4 = *(*arg3 + 8)
            int64_t* rcx_16 = r9_4[1]
            int16_t* rdx_14 = *rcx_16
            
            if (&rdx_14[1] u> rcx_16[1])
                char* rdx_15 = &arg_10
                
                if ((*(r9_4 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_4, rdx_15, arg6)
                    r8 = zx.d(arg_10.w)
                else
                    (*(*r9_4 + 0x150))(r9_4, rdx_15, 2)
                    r8 = zx.d(arg_10.w)
            else
                arg_10.w = *rdx_14
                int64_t* rax_40 = r9_4[1]
                *rax_40 += 2
                r8 = zx.d(arg_10.w)
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = r8
            return 2
        case 0x21
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                sub_140d0ba50(arg3, arg7, arg2)
            return 2
return 0
