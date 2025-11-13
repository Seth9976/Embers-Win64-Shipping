// 函数: sub_142866730
// 地址: 0x142866730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t i = 0
uint64_t rbp = 0xffffffff
char const (** rbx)[0x17] = nullptr
*(*(arg1 + 0xa8) + 0x2e0) = 0
*(*(arg1 + 0xa8) + 0x2d8) = 0
int32_t* rcx = *(arg1 + 8)
char r10 = (*(*(rcx + 0xc0) + 0x60)).b
int32_t rax_3

if ((r10 & 8) == 0)
    rax_3 = *rcx

int32_t var_30
void* rax_41

if ((r10 & 8) != 0 || rax_3 s< 0x304 || rax_3 == 0x10000)
    void* r8_1 = *(arg1 + 0xa8)
    
    if ((*(*(r8_1 + 0x238) + 0x20) & 0xab) != 0)
        if (*(arg1 + 0x38) != 0)
        label_142866977:
            
            if ((r10 & 2) == 0)
                char const (** rax_46)[0x17] = sub_1428652a0(arg1, 0xffffffff)
                rbx = rax_46
                
                if (rax_46 != 0)
                    goto label_142866b20
                
                if (arg2 != 0)
                    sub_142856580(arg1, (&rax_46[0xa]).d, 0x201, (rax_46 + 0x44).d, "ssl\t1_lib.c", 
                        0xa82)
                    return 0
            else if (*(r8_1 + 0x2e8) == 0)
                char const (** rax_43)[0x17] = sub_1428652a0(arg1, 0xffffffff)
                rbx = rax_43
                
                if (rax_43 != 0)
                    int16_t* arg_8
                    int64_t rax_44 = sub_142864260(arg1, 1, &arg_8)
                    
                    if (rax_44 != 0)
                        int16_t* r14_2 = arg_8
                        
                        do
                            if (rbx[1].w == *r14_2 && sub_142862f40(arg1, rbx, rbx[3].d) != 0)
                                break
                            
                            i += 1
                            r14_2 = &r14_2[1]
                        while (i u< rax_44)
                    
                    if (i != rax_44)
                        goto label_142866b20
                    
                    if (arg2 != 0)
                        sub_142856580(arg1, 0x2f, 0x201, 0x172, "ssl\t1_lib.c", 0xa79)
                        return 0
                else if (arg2 != 0)
                    sub_142856580(arg1, (&rax_43[0xa]).d, 0x201, (rax_43 + 0x44).d, "ssl\t1_lib.c", 
                        0xa69)
                    return 0
            else
                int64_t* rdx_6 = *(arg1 + 0x488)
                int32_t r15_1
                
                if ((*(rdx_6 + 0x1c) & 0x30000) == 0)
                    r15_1 = -1
                else
                    int32_t rax_28 = sub_140611e80(sub_142891590(sub_142896700(rdx_6[0x14])))
                    rdx_6 = *(arg1 + 0x488)
                    r15_1 = rax_28
                
                if (rdx_6[0x38] u> 0)
                    do
                        rbx = *(rdx_6[0x37] + (i << 3))
                        rbp = sx.q(rbx[3].d)
                        
                        if (*(arg1 + 0x38) == 0)
                            int64_t rax_32
                            int64_t rdx_8
                            rdx_8:rax_32 = muls.dp.q(0x6666666666666667, *rdx_6 - rdx_6 - 0x20)
                            int64_t rdx_9 = rdx_8 s>> 4
                            
                            if (rdx_9.d + (rdx_9 u>> 0x3f).d == rbp.d)
                            label_142866a87:
                                
                                if (sub_142862f40(arg1, rbx, rbp.d) != 0)
                                    int32_t rax_40
                                    
                                    if (*(rbx + 0x14) == 0x390)
                                        rax_40 = sub_142863160(
                                            sub_142896660(
                                                *(*(arg1 + 0x488) + (sx.q(rbp.d) + 1) * 0x28)), 
                                            rbx)
                                    
                                    if (*(rbx + 0x14) != 0x390 || rax_40 != 0)
                                        if (sx.q(r15_1) == -1)
                                            break
                                        
                                        if (rbx[4].d == r15_1)
                                            break
                        else
                            int32_t r14_1 = rbp.d
                            void* rax_30 = sub_1428541e0(rbp)
                            void* rdx_7
                            void* r8_2
                            
                            if (rax_30 != 0)
                                r8_2 = *(arg1 + 0xa8)
                                rdx_7 = *(r8_2 + 0x238)
                            
                            if (rax_30 == 0 || (*(rax_30 + 4) & *(rdx_7 + 0x20)) == 0
                                    || (*rax_30 == 0x390 && (*(rdx_7 + 0x1c) & 1) != 0))
                                rbp = 0xffffffff
                            else
                                bool cond:1_1 = (*(r8_2 + (rbp << 2) + 0x310) & 1) != 0
                                rbp = 0xffffffff
                                
                                if (cond:1_1)
                                    rbp = zx.q(r14_1)
                                
                                if (rbp.d != 0xffffffff)
                                    goto label_142866a87
                        
                        rdx_6 = *(arg1 + 0x488)
                        i += 1
                    while (i u< rdx_6[0x38])
                
                rax_41 = *(arg1 + 0x488)
                
                if (i != *(rax_41 + 0x1c0))
                    if (rbp.d != 0xffffffff)
                        goto label_142866b2a
                    
                    goto label_142866b20
                
                if (arg2 != 0)
                    var_30 = 0xa5b
                    goto label_1428668cf
        else
            int64_t* r9_2 = *(arg1 + 0x488)
            int64_t rax_22
            int64_t rdx_3
            rdx_3:rax_22 = muls.dp.q(0x6666666666666667, *r9_2 - r9_2 - 0x20)
            int64_t rdx_4 = rdx_3 s>> 4
            int32_t rdx_5 = rdx_4.d + (rdx_4 u>> 0x3f).d
            
            if (rdx_5 u<= 8)
                int64_t rcx_15 = sx.q(rdx_5) * 5
                
                if (r9_2[rcx_15 + 4] != 0 && r9_2[rcx_15 + 5] != 0)
                    goto label_142866977
else
    void* rax_4 = *(arg1 + 0x488)
    
    if (*(rax_4 + 0x1c0) u> 0)
        do
            rbx = *(*(rax_4 + 0x1b8) + (i << 3))
            int32_t rax_6 = *(rbx + 0xc)
            
            if (rax_6 != 0x40 && rax_6 != 0x2a3)
                int32_t rcx_1 = *(rbx + 0x14)
                
                if (rcx_1 != 0x74 && rcx_1 != 6)
                    int64_t rax_7
                    
                    if (rax_6 != 0)
                        rax_7 = sub_14285b4c0((rbx[2].d).b)
                    
                    if ((rax_6 == 0 || rax_7 != 0) && sub_142862f40(arg1, rbx, 0xffffffff) != 0)
                        int32_t rax_9 = *(rbx + 0x14)
                        
                        if (rax_9 != 0x198)
                            if (rax_9 != 0x390)
                                break
                            
                            if (sub_142863160(
                                    sub_142896660(
                                        *(*(arg1 + 0x488) + (sx.q(rbx[3].d) + 1) * 0x28)), 
                                    rbx) != 0)
                                break
                        else
                            if (rbp.d == 0xffffffff)
                                rbp = zx.q(sub_140611e80(sub_142891590(sub_142896700(
                                    *(*(arg1 + 0x488) + 0xa0)))))
                            
                            int32_t rax_13 = rbx[4].d
                            
                            if (rax_13 == 0)
                                break
                            
                            if (rbp.d == rax_13)
                                break
            
            rax_4 = *(arg1 + 0x488)
            i += 1
        while (i u< *(rax_4 + 0x1c0))
    
    if (i != *(*(arg1 + 0x488) + 0x1c0))
    label_142866b20:
        rbp = zx.q(rbx[3].d)
        rax_41 = *(arg1 + 0x488)
    label_142866b2a:
        int64_t rcx_28 = sx.q(rbp.d)
        *(*(arg1 + 0xa8) + 0x2e0) = rax_41 + ((rcx_28 + ((rcx_28 + 1) << 2)) << 3)
        **(arg1 + 0x488) = *(*(arg1 + 0xa8) + 0x2e0)
        *(*(arg1 + 0xa8) + 0x2d8) = rbx
    else if (arg2 != 0)
        var_30 = 0xa1d
    label_1428668cf:
        sub_142856580(arg1, 0x28, 0x201, 0x76, "ssl\t1_lib.c", var_30)
        return 0
return 1
