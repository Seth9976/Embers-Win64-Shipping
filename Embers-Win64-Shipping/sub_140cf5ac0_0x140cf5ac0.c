// 函数: sub_140cf5ac0
// 地址: 0x140cf5ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b63aa0(arg2 + 8)
char arg_10
int64_t* rcx_4
int64_t* rdx_1
int64_t r8
int64_t* r9

if (rax != 0)
    switch (*rax - 1)
        case 0
            if (*(arg2 + 0x24) == 0)
                goto label_140cf5b20
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                sub_140d0ba50(arg3, arg7, arg2)
            return 2
        case 1, 0x18
            r9 = *(*arg3 + 8)
            int64_t* rcx_6 = r9[1]
            int32_t* rdx_7 = *rcx_6
            
            if (&rdx_7[1] u<= rcx_6[1])
                arg_10.d = *rdx_7
                int64_t* rax_24 = r9[1]
                *rax_24 += 4
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            rdx_1 = &arg_10
            rcx_4 = r9
            
            if ((*(r9 + 0x29) & 0x20) == 0)
                r8 = 4
                goto label_140cf5b54
            
            sub_140b54070(rcx_4, rdx_1, arg6)
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
            return 2
        case 3
            sub_140cef730(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 7
            sub_140cefbc0(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x13
            r9 = *(*arg3 + 8)
            int64_t* rcx_7 = r9[1]
            int64_t* rdx_10 = *rcx_7
            
            if (&rdx_10[1] u<= rcx_7[1])
                arg_10.q = *rdx_10
                int64_t* rax_31 = r9[1]
                *rax_31 += 8
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            rdx_1 = &arg_10
            rcx_4 = r9
            
            if ((*(r9 + 0x29) & 0x20) == 0)
                r8 = 8
                goto label_140cf5b54
            
            sub_140b540d0(rcx_4, rdx_1, arg6)
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
            return 2
        case 0x15, 0x19
            r9 = *(*arg3 + 8)
            int64_t* rcx_5 = r9[1]
            int16_t* rdx_4 = *rcx_5
            
            if (&rdx_4[1] u<= rcx_5[1])
                arg_10.w = *rdx_4
                int64_t* rax_17 = r9[1]
                *rax_17 += 2
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            rdx_1 = &arg_10
            rcx_4 = r9
            
            if ((*(r9 + 0x29) & 0x20) == 0)
                r8 = 2
                goto label_140cf5b54
            
            sub_140b54000(rcx_4, rdx_1, arg6)
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
            return 2
        case 0x16
        label_140cf5b20:
            r9 = *(*arg3 + 8)
            int64_t* rcx_3 = r9[1]
            char* rdx = *rcx_3
            
            if (&rdx[1] u<= rcx_3[1])
                arg_10 = *rdx
                int64_t* rax_8 = r9[1]
                *rax_8 += 1
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            r8 = 1
            rdx_1 = &arg_10
            rcx_4 = r9
        label_140cf5b54:
            (*(*r9 + 0x150))(rcx_4, rdx_1, r8, r9)
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
            return 2
        case 0x17
            sub_140cf0050(&arg_10, arg1, arg3, arg4, arg5, arg6, arg2)
            return 2
        case 0x21
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                sub_140d0ba50(arg3, arg7, arg2)
            return 2
return 0
