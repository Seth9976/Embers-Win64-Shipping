// 函数: sub_140ca4da0
// 地址: 0x140ca4da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8

if ((arg3[5].b & 1) == 0)
    arg4 = *(sx.q(*arg2) + arg1[0xc])
    arg_8 = arg4

int64_t* rcx = arg3[1]
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg3 + 0x150))(arg3, &arg_8, 1, arg4)
else
    arg_8 = *rdx
    *rcx += 1

if ((arg3[5].b & 2) == 0)
    *(sx.q(*arg2) + arg1[0xc]) = arg_8

int64_t rax_6 = sx.q(*arg2)
int32_t rdx_3 = (rax_6 + 1).d
*arg2 = rdx_3
char* r8 = arg1[0xc]
uint64_t r12 = zx.q(r8[rax_6])
int64_t var_38
char rcx_5
int32_t rcx_35
int64_t zmm0

if (r12.d u<= 0x6d)
    switch (r12)
        case 0, 1, 2, 0x48, 0x6c
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            *arg2 += 8
        case 4, 0x4e, 0x4f, 0x51, 0x5d, 0x67, 0x6d
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 6, 0x1d, 0x4c, 0x5b
            if ((arg3[5].b & 1) != 0)
                goto label_140ca5699
            
            rcx_35 = *(sx.q(rdx_3) + r8)
        label_140ca5696:
            arg_8.d = rcx_35
        label_140ca5699:
            int64_t* rcx_70 = arg3[1]
            int32_t* rdx_41 = *rcx_70
            
            if (&rdx_41[1] u> rcx_70[1])
                int32_t* rdx_42 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_42, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_42, 4)
            else
                arg_8.d = *rdx_41
                *rcx_70 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
        case 7, 0x18
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_179 = arg3[1]
            int32_t* rdx_110 = *rcx_179
            
            if (&rdx_110[1] u> rcx_179[1])
                char* rdx_111 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_111, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_111, 4)
            else
                arg_8.d = *rdx_110
                *rcx_179 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 9
            if ((arg3[5].b & 1) == 0)
                arg_8.w = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_171 = arg3[1]
            int16_t* rdx_104 = *rcx_171
            
            if (&rdx_104[1] u> rcx_171[1])
                char* rdx_105 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg3, rdx_105, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_105, 2)
            else
                arg_8.w = *rdx_104
                *rcx_171 += 2
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.w
            
            int32_t rax_317 = *arg2 + 2
            *arg2 = rax_317
            
            if ((arg3[5].b & 1) != 0)
                goto label_140ca6301
            
            rcx_5 = *(sx.q(rax_317) + arg1[0xc])
            goto label_140ca62fe
        case 0xf
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            *arg2 += 8
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x12, 0x19, 0x1a
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3, rax_6)
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(*arg2) + arg1[0xc])
            
            int64_t* rcx_27 = arg3[1]
            int32_t* rdx_15 = *rcx_27
            
            if (&rdx_15[1] u> rcx_27[1])
                int32_t* rdx_16 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_16, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_16, 4)
            else
                arg_8.d = *rdx_15
                *rcx_27 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            int32_t rax_67 = *arg2 + 4
            arg_8.q = 0
            *arg2 = rax_67
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rax_67) + arg1[0xc])
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            *arg2 += 8
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x13
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int64_t rcx_165 = sx.q(*arg2)
            *arg2 = (rcx_165 + 8).d
            
            if ((arg3[5].b & 2) == 0)
                sub_140be0e50(rcx_165 + arg1[0xc])
            
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x14, 0x43, 0x44, 0x5c, 0x5f, 0x60, 0x62
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x1b, 0x45
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                int64_t* rax_44 = sx.q(rdx_3)
                arg6 = *(rax_44 + r8 + 8)
                arg_8.d = (*(rax_44 + r8)).d
                arg_8.q = arg_8.q
            
            (*(*arg3 + 0x140))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                int32_t rax_48 = arg_8.d
                var_38.d = rax_48
                var_38:4.d = rax_48
                int64_t* rax_50 = sx.q(*arg2) + arg1[0xc]
                *rax_50 = var_38
                rax_50[1].d = arg6
            
            *arg2 += 0xc
            int32_t i
            
            do
                i = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i != 0x16)
        case 0x1c, 0x46, 0x68
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int64_t rcx_13 = sx.q(*arg2)
            *arg2 = (rcx_13 + 8).d
            
            if ((arg3[5].b & 2) == 0)
                sub_140be0e50(rcx_13 + arg1[0xc])
            
            int32_t i_1
            
            do
                i_1 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_1 != 0x16)
        case 0x1e
            if ((arg3[5].b & 1) != 0)
                goto label_140ca5b52
            
            zmm0 = *(sx.q(rdx_3) + r8)
        label_140ca5b4d:
            arg_8.d = zmm0.d
        label_140ca5b52:
            int64_t* rcx_110 = arg3[1]
            int32_t* rdx_63 = *rcx_110
            
            if (&rdx_63[1] u> rcx_110[1])
                int32_t* rdx_64 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_64, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_64, 4)
            else
                arg_8.d = *rdx_63
                *rcx_110 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            *arg2 += 4
        case 0x1f
            char* rax_87
            
            do
                if ((arg3[5].b & 1) == 0)
                    arg_8 = *(sx.q(rdx_3) + r8)
                
                int64_t* rcx_37 = arg3[1]
                char* rdx_22 = *rcx_37
                
                if (&rdx_22[1] u> rcx_37[1])
                    (*(*arg3 + 0x150))(arg3, &arg_8, 1)
                else
                    arg_8 = *rdx_22
                    *rcx_37 += 1
                
                if ((arg3[5].b & 2) == 0)
                    *(sx.q(*arg2) + arg1[0xc]) = arg_8
                
                rax_87 = sx.q(*arg2)
                rdx_3 = (&rax_87[1]).d
                *arg2 = rdx_3
                r8 = arg1[0xc]
            while (*(rax_87 + r8) != 0)
        case 0x20
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int64_t rcx_58 = sx.q(*arg2)
            *arg2 = (rcx_58 + 8).d
            
            if ((arg3[5].b & 2) == 0)
                sub_140be0e50(rcx_58 + arg1[0xc])
        case 0x21, 0x4b
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                int64_t* rax_328 = sx.q(rdx_3)
                arg6 = *(rax_328 + r8 + 8)
                arg_8.d = (*(rax_328 + r8)).d
                arg_8.q = arg_8.q
            
            (*(*arg3 + 0x140))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                int32_t rax_332 = arg_8.d
                var_38.d = rax_332
                var_38:4.d = rax_332
                int64_t* rax_334 = sx.q(*arg2) + arg1[0xc]
                *rax_334 = var_38
                rax_334[1].d = arg6
            
            *arg2 += 0xc
        case 0x22
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_61 = arg3[1]
            int32_t* rdx_35 = *rcx_61
            
            if (&rdx_35[1] u> rcx_61[1])
                int32_t* rdx_36 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_36, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_36, 4)
            else
                arg_8.d = *rdx_35
                *rcx_61 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            int32_t rax_122 = *arg2 + 4
            *arg2 = rax_122
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rax_122) + arg1[0xc])
            
            int64_t* rcx_66 = arg3[1]
            int32_t* rdx_38 = *rcx_66
            
            if (&rdx_38[1] u> rcx_66[1])
                int32_t* rdx_39 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_39, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_39, 4)
            else
                arg_8.d = *rdx_38
                *rcx_66 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            int32_t rax_129 = *arg2 + 4
            *arg2 = rax_129
            
            if ((arg3[5].b & 1) != 0)
                goto label_140ca5699
            
            rcx_35 = *(sx.q(rax_129) + arg1[0xc])
            goto label_140ca5696
        case 0x23
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rdx_3) + r8)).d
            
            int64_t* rcx_73 = arg3[1]
            int32_t* rdx_44 = *rcx_73
            
            if (&rdx_44[1] u> rcx_73[1])
            label_140ca5a8a:
                int32_t* rdx_60 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_60, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_60, 4)
                
                goto label_140ca5aad
            
            arg_8.d = *rdx_44
            *rcx_73 += 4
        label_140ca5aad:
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_193 = *arg2 + 4
            *arg2 = rax_193
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_193) + arg1[0xc])).d
            
            int64_t* rcx_106 = arg3[1]
            int32_t* rdx_61 = *rcx_106
            
            if (&rdx_61[1] u> rcx_106[1])
                int32_t* rdx_62 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_62, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_62, 4)
            else
                arg_8.d = *rdx_61
                *rcx_106 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_200 = *arg2 + 4
            *arg2 = rax_200
            
            if ((arg3[5].b & 1) != 0)
                goto label_140ca5b52
            
            zmm0 = *(sx.q(rax_200) + arg1[0xc])
            goto label_140ca5b4d
        case 0x24, 0x2c
            if ((arg3[5].b & 1) == 0)
                arg_8 = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_161 = arg3[1]
            char* rdx_99 = *rcx_161
            
            if (&rdx_99[1] u> rcx_161[1])
                (*(*arg3 + 0x150))(arg3, &arg_8, 1)
            else
                arg_8 = *rdx_99
                *rcx_161 += 1
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8
            
            *arg2 += 1
        case 0x29
            if ((arg3[5].b & 1) == 0)
                arg_8 = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_46 = arg3[1]
            char* rdx_28 = *rcx_46
            
            if (&rdx_28[1] u> rcx_46[1])
                (*(*arg3 + 0x150))(arg3, &arg_8, 1)
            else
                arg_8 = *rdx_28
                *rcx_46 += 1
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8
            
            int64_t rax_100 = sx.q(*arg2)
            int32_t rdx_31 = (rax_100 + 1).d
            *arg2 = rdx_31
            int64_t r8_5 = arg1[0xc]
            uint32_t rcx_49 = zx.d(*(rax_100 + r8_5))
            
            if (rcx_49 == 1)
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            else if (rcx_49 == 2 || rcx_49 == 3)
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            else if (rcx_49 == 4)
                arg_8.q = 0
                
                if ((arg3[5].b & (rcx_49 - 3).b) == 0)
                    arg_8.q = *(sx.q(rdx_31) + r8_5)
                
                (*(*arg3 + 0x130))(arg3, &arg_8)
                
                if ((arg3[5].b & 2) == 0)
                    *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
                
                int64_t rcx_54 = sx.q(*arg2)
                *arg2 = (rcx_54 + 8).d
                
                if ((arg3[5].b & 2) == 0)
                    sub_140be0e50(rcx_54 + arg1[0xc])
                
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x2b
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rdx_3) + r8)).d
            
            int64_t* rcx_74 = arg3[1]
            int32_t* rdx_45 = *rcx_74
            
            if (&rdx_45[1] u> rcx_74[1])
                int32_t* rdx_46 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_46, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_46, 4)
            else
                arg_8.d = *rdx_45
                *rcx_74 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_144 = *arg2 + 4
            *arg2 = rax_144
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_144) + arg1[0xc])).d
            
            int64_t* rcx_78 = arg3[1]
            int32_t* rdx_47 = *rcx_78
            
            if (&rdx_47[1] u> rcx_78[1])
                int32_t* rdx_48 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_48, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_48, 4)
            else
                arg_8.d = *rdx_47
                *rcx_78 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_151 = *arg2 + 4
            *arg2 = rax_151
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_151) + arg1[0xc])).d
            
            int64_t* rcx_82 = arg3[1]
            int32_t* rdx_49 = *rcx_82
            
            if (&rdx_49[1] u> rcx_82[1])
                int32_t* rdx_50 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_50, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_50, 4)
            else
                arg_8.d = *rdx_49
                *rcx_82 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_158 = *arg2 + 4
            *arg2 = rax_158
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_158) + arg1[0xc])).d
            
            int64_t* rcx_86 = arg3[1]
            int32_t* rdx_51 = *rcx_86
            
            if (&rdx_51[1] u> rcx_86[1])
                int32_t* rdx_52 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_52, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_52, 4)
            else
                arg_8.d = *rdx_51
                *rcx_86 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_165 = *arg2 + 4
            *arg2 = rax_165
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_165) + arg1[0xc])).d
            
            int64_t* rcx_90 = arg3[1]
            int32_t* rdx_53 = *rcx_90
            
            if (&rdx_53[1] u> rcx_90[1])
                int32_t* rdx_54 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_54, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_54, 4)
            else
                arg_8.d = *rdx_53
                *rcx_90 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_172 = *arg2 + 4
            *arg2 = rax_172
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_172) + arg1[0xc])).d
            
            int64_t* rcx_94 = arg3[1]
            int32_t* rdx_55 = *rcx_94
            
            if (&rdx_55[1] u> rcx_94[1])
                int32_t* rdx_56 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_56, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_56, 4)
            else
                arg_8.d = *rdx_55
                *rcx_94 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_179 = *arg2 + 4
            *arg2 = rax_179
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_179) + arg1[0xc])).d
            
            int64_t* rcx_98 = arg3[1]
            int32_t* rdx_57 = *rcx_98
            
            if (&rdx_57[1] u> rcx_98[1])
                int32_t* rdx_58 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_58, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_58, 4)
            else
                arg_8.d = *rdx_57
                *rcx_98 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d.d
            
            int32_t rax_186 = *arg2 + 4
            *arg2 = rax_186
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = (*(sx.q(rax_186) + arg1[0xc])).d
            
            int64_t* rcx_102 = arg3[1]
            int32_t* rdx_59 = *rcx_102
            
            if (&rdx_59[1] u> rcx_102[1])
                goto label_140ca5a8a
            
            arg_8.d = *rdx_59
            *rcx_102 += 4
            goto label_140ca5aad
        case 0x2e
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int64_t rcx_168 = sx.q(*arg2)
            *arg2 = (rcx_168 + 8).d
            
            if ((arg3[5].b & 2) == 0)
                sub_140be0e50(rcx_168 + arg1[0xc])
            
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x2f
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int32_t rax_213 = *arg2 + 8
            *arg2 = rax_213
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rax_213) + arg1[0xc])
            
            int64_t* rcx_116 = arg3[1]
            int32_t* rdx_66 = *rcx_116
            
            if (&rdx_66[1] u> rcx_116[1])
                char* rdx_67 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_67, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_67, 4)
            else
                arg_8.d = *rdx_66
                *rcx_116 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            int32_t i_2
            
            do
                i_2 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_2 != 0x30)
        case 0x31
            if (sub_140d3cb50(arg1) == 0 || (arg3[5].b & 1) == 0 || arg3[8].d s>= 0x12f)
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            else
                arg_8.q = 0
                (*(*arg3 + 0x128))(arg3, &arg_8)
                
                if ((arg3[5].b & 2) == 0)
                    *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
                
                *arg2 += 8
            
            int32_t i_3
            
            do
                i_3 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_3 != 0x32)
        case 0x34
            while (true)
                if ((arg3[5].b & 1) == 0)
                    arg_8.w = *(sx.q(rdx_3) + r8)
                
                int64_t* rcx_41 = arg3[1]
                int16_t* rdx_25 = *rcx_41
                
                if (&rdx_25[1] u> rcx_41[1])
                    int16_t* rdx_26 = &arg_8
                    
                    if ((*(arg3 + 0x29) & 0x20) != 0)
                        sub_140b54000(arg3, rdx_26, arg5)
                    else
                        (*(*arg3 + 0x150))(arg3, rdx_26, 2)
                else
                    arg_8.w = *rdx_25
                    *rcx_41 += 2
                
                if ((arg3[5].b & 2) == 0)
                    *(sx.q(*arg2) + arg1[0xc]) = arg_8.w
                
                int64_t rax_93 = sx.q(*arg2)
                int32_t rcx_44 = (rax_93 + 2).d
                *arg2 = rcx_44
                rdx_3 = rcx_44
                char* r9_2 = arg1[0xc]
                r8 = r9_2
                
                if (r9_2[rax_93 + 1] == 0)
                    if (r9_2[sx.q(rcx_44) - 2] == 0)
                        break
        case 0x35, 0x36
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_32 = arg3[1]
            int64_t* rdx_19 = *rcx_32
            
            if (&rdx_19[1] u> rcx_32[1])
                int64_t* rdx_20 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg3, rdx_20, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_20, 8)
            else
                arg_8.q = *rdx_19
                *rcx_32 += 8
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            *arg2 += 8
        case 0x38
            if ((arg3[5].b & 1) != 0)
                goto label_140ca6301
            
            rcx_5 = *(sx.q(rdx_3) + r8)
        label_140ca62fe:
            arg_8 = rcx_5
        label_140ca6301:
            int64_t* rcx_175 = arg3[1]
            char* rdx_107 = *rcx_175
            
            if (&rdx_107[1] u> rcx_175[1])
                (*(*arg3 + 0x150))(arg3, &arg_8, 1)
            else
                arg_8 = *rdx_107
                *rcx_175 += 1
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8
            
            *arg2 += 1
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x39
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3, rax_6)
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(*arg2) + arg1[0xc])
            
            int64_t* rcx_127 = arg3[1]
            int32_t* rdx_74 = *rcx_127
            
            if (&rdx_74[1] u> rcx_127[1])
                char* rdx_75 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_75, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_75, 4)
            else
                arg_8.d = *rdx_74
                *rcx_127 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            int32_t i_4
            
            do
                i_4 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_4 != 0x3a)
        case 0x3b
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3, rax_6)
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(*arg2) + arg1[0xc])
            
            int64_t* rcx_134 = arg3[1]
            int32_t* rdx_79 = *rcx_134
            
            if (&rdx_79[1] u> rcx_134[1])
                char* rdx_80 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_80, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_80, 4)
            else
                arg_8.d = *rdx_79
                *rcx_134 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            int32_t i_5
            
            do
                i_5 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_5 != 0x3c)
        case 0x3d
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int32_t rax_262 = *arg2 + 8
            *arg2 = rax_262
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rax_262) + arg1[0xc])
            
            int64_t* rcx_148 = arg3[1]
            int32_t* rdx_89 = *rcx_148
            
            if (&rdx_89[1] u> rcx_148[1])
                char* rdx_90 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_90, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_90, 4)
            else
                arg_8.d = *rdx_89
                *rcx_148 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            int32_t i_6
            
            do
                i_6 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_6 != 0x3e)
        case 0x3f
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int32_t rax_276 = *arg2 + 8
            arg_8.q = 0
            *arg2 = rax_276
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rax_276) + arg1[0xc])
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int32_t rax_285 = *arg2 + 8
            *arg2 = rax_285
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rax_285) + arg1[0xc])
            
            int64_t* rcx_156 = arg3[1]
            int32_t* rdx_95 = *rcx_156
            
            if (&rdx_95[1] u> rcx_156[1])
                char* rdx_96 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_96, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_96, 4)
            else
                arg_8.d = *rdx_95
                *rcx_156 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            int32_t i_7
            
            do
                i_7 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_7 != 0x40)
        case 0x42, 0x64
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) != 0)
                *arg2 += 8
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            else
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
                *arg2 += 8
                (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x50
            if ((arg3[5].b & 1) != 0)
                r8[rax_6] = 0x5e
        case 0x52, 0x54, 0x55
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int64_t rcx_7 = sx.q(*arg2)
            *arg2 = (rcx_7 + 8).d
            
            if ((arg3[5].b & 2) == 0)
                sub_140be0e50(rcx_7 + arg1[0xc])
            
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x61
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                int64_t* rax_335 = sx.q(rdx_3)
                arg6 = *(rax_335 + r8 + 8)
                arg_8.d = (*(rax_335 + r8)).d
                arg_8.q = arg_8.q
            
            (*(*arg3 + 0x140))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                int32_t rax_339 = arg_8.d
                var_38.d = rax_339
                var_38:4.d = rax_339
                int64_t* rax_341 = sx.q(*arg2) + arg1[0xc]
                *rax_341 = var_38
                rax_341[1].d = arg6
            
            *arg2 += 0xc
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x63
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x130))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int64_t rcx_21 = sx.q(*arg2)
            *arg2 = (rcx_21 + 8).d
            
            if ((arg3[5].b & 2) == 0)
                sub_140be0e50(rcx_21 + arg1[0xc])
            
            int32_t i_8
            
            do
                i_8 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_8 != 0x16)
        case 0x65
            arg_8.q = 0
            
            if ((arg3[5].b & 1) == 0)
                arg_8.q = *(sx.q(rdx_3) + r8)
            
            (*(*arg3 + 0x128))(arg3, &arg_8)
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.q
            
            int32_t rax_248 = *arg2 + 8
            *arg2 = rax_248
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rax_248) + arg1[0xc])
            
            int64_t* rcx_141 = arg3[1]
            int32_t* rdx_84 = *rcx_141
            
            if (&rdx_84[1] u> rcx_141[1])
                char* rdx_85 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_85, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_85, 4)
            else
                arg_8.d = *rdx_84
                *rcx_141 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            int32_t i_9
            
            do
                i_9 = (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            while (i_9 != 0x66)
        case 0x69
            if ((arg3[5].b & 1) == 0)
                arg_8.w = *(sx.q(rdx_3) + r8)
            
            int64_t* rcx_191 = arg3[1]
            int16_t* rdx_117 = *rcx_191
            
            if (&rdx_117[1] u> rcx_191[1])
                char* rdx_118 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg3, rdx_118, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_118, 2)
            else
                arg_8.w = *rdx_117
                *rcx_191 += 2
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.w
            
            int64_t rax_349 = sx.q(*arg2)
            int32_t rcx_194 = (rax_349 + 2).d
            *arg2 = rcx_194
            int64_t rdx_120 = arg1[0xc]
            int16_t i_12 = *(rax_349 + rdx_120)
            
            if ((arg3[5].b & 1) == 0)
                arg_8.d = *(sx.q(rcx_194) + rdx_120)
            
            int64_t* rcx_196 = arg3[1]
            int32_t* rdx_121 = *rcx_196
            
            if (&rdx_121[1] u> rcx_196[1])
                char* rdx_122 = &arg_8
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg3, rdx_122, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_122, 4)
            else
                arg_8.d = *rdx_121
                *rcx_196 += 4
            
            if ((arg3[5].b & 2) == 0)
                *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
            
            *arg2 += 4
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
            
            if (0 u< i_12)
                uint64_t i_11 = zx.q(i_12)
                uint64_t i_10
                
                do
                    (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
                    
                    if ((arg3[5].b & 1) == 0)
                        arg_8.d = *(sx.q(*arg2) + arg1[0xc])
                    
                    int64_t* rcx_203 = arg3[1]
                    int32_t* rdx_126 = *rcx_203
                    
                    if (&rdx_126[1] u> rcx_203[1])
                        char* rdx_127 = &arg_8
                        
                        if ((*(arg3 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg3, rdx_127, arg5)
                        else
                            (*(*arg3 + 0x150))(arg3, rdx_127, 4)
                    else
                        arg_8.d = *rdx_126
                        *rcx_203 += 4
                    
                    if ((arg3[5].b & 2) == 0)
                        *(sx.q(*arg2) + arg1[0xc]) = arg_8.d
                    
                    *arg2 += 4
                    (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
                    i_10 = i_11
                    i_11 -= 1
                while (i_10 != 1)
            
            (*(*arg1 + 0x2b8))(arg1, arg2, arg3)
        case 0x6a
            if (*(sx.q(rdx_3) + r8) == 4)
                rdx_3 += 0xc
            
            *arg2 = rdx_3 + 1
        case 0x6b
            int64_t r9_3 = *arg1
            (*(r9_3 + 0x2b8))(arg1, arg2, arg3, r9_3)
            int64_t r9_4 = *arg1
            (*(r9_4 + 0x2b8))(arg1, arg2, arg3, r9_4)
return zx.q(r12.d)
