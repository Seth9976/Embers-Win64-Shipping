// 函数: sub_1428d7bf0
// 地址: 0x1428d7bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x98)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r15 = 0
int64_t var_88 = 0
int32_t var_a4 = 0
int32_t r13 = 0
int32_t rbx = 0
sub_1428d8e50(arg4)
int64_t* rax_2 = sub_1428d8ba0(arg4)
int64_t* rax_3 = sub_1428d8ba0(arg4)
int64_t* rax_4 = sub_1428d8ba0(arg4)
int64_t* r12 = rax_4
int64_t* rax_5 = sub_1428d8ba0(arg4)

if (rax_5 != 0)
    int32_t rax_6
    
    if (*(arg3 + 4) == 1)
        rax_6 = sub_142898c70(*(arg3 + 0x58))
        r13 = rax_6
        var_a4 = rax_6
    
    if (*(arg3 + 4) != 1 || rax_6 - 1 u<= 2)
        char rax_16 = (*(arg3 + 0x74)).b
        
        if ((rax_16 & 4) == 0)
        label_1428d7dbf:
            int32_t* rax_17
            
            if ((rax_16 & 2) != 0)
                rax_17 = sub_1428cc990(arg3 + 0x78, *(arg3 + 0xa8), *(arg3 + 0x18), arg4)
            
            if ((rax_16 & 2) == 0 || rax_17 != 0)
                int64_t* r15_1
                
                if (rbx == 0)
                    int64_t* rax_31 = sub_142890500()
                    int64_t* r15_2 = rax_31
                    
                    if (rax_31 != 0)
                        sub_142890a00(rax_31, arg2, 4)
                        int32_t rax_32 = sub_14291a950(nullptr, rax_2, r15_2, *(arg3 + 0x38), arg4)
                        int64_t* rax_33
                        
                        if (rax_32 != 0)
                            rax_33 = sub_142890500()
                        
                        int64_t* rcx_59
                        
                        if (rax_32 == 0 || rax_33 == 0)
                        label_1428d7f8b:
                            rcx_59 = r15_2
                        label_1428d7f8e:
                            sub_1428901a0(rcx_59)
                        else
                            sub_142890a00(rax_33, *(arg3 + 0x48), 4)
                            
                            if ((*(*(arg3 + 8) + 0x30))(r12, rax_2, rax_33, *(arg3 + 0x38), arg4, 
                                    *(arg3 + 0x88)) != 0)
                                sub_1428901a0(rax_33)
                                int32_t rax_36 =
                                    sub_14291a950(nullptr, rax_2, r15_2, *(arg3 + 0x30), arg4)
                                sub_1428901a0(r15_2)
                                
                                if (rax_36 != 0)
                                    int64_t* rax_37 = sub_142890500()
                                    
                                    if (rax_37 != 0)
                                        sub_142890a00(rax_37, *(arg3 + 0x40), 4)
                                        int32_t rax_39 = (*(*(arg3 + 8) + 0x30))(arg1, rax_2, 
                                            rax_37, *(arg3 + 0x30), arg4, *(arg3 + 0x80))
                                        sub_1428901a0(rax_37)
                                        
                                        if (rax_39 != 0)
                                            int64_t rbx_6 = sx.q(r13)
                                            int64_t var_90 = rbx_6
                                            int32_t var_a8
                                            int64_t** var_98
                                            int64_t var_68[0x3]
                                            
                                            if (r13 s<= 0)
                                            label_1428d81a0:
                                                
                                                if (sub_1428d9010(arg1, arg1, r12) != 0)
                                                    int32_t rax_49 = sub_142890280(arg1)
                                                    int32_t rax_50
                                                    
                                                    if (rax_49 != 0)
                                                        rax_50 = sub_1428d8f70(arg1, arg1, 
                                                            *(arg3 + 0x30))
                                                    
                                                    if ((rax_49 == 0 || rax_50 != 0) &&
                                                            sub_1428d9290(rax_2, arg1, 
                                                            *(arg3 + 0x50), arg4) != 0)
                                                        int64_t* rax_52 = sub_142890500()
                                                        
                                                        if (rax_52 != 0)
                                                            sub_142890a00(rax_52, rax_2, 4)
                                                            int32_t rax_53 = sub_14291a950(nullptr, 
                                                                arg1, rax_52, *(arg3 + 0x30), arg4)
                                                            sub_1428901a0(rax_52)
                                                            
                                                            if (rax_53 != 0)
                                                                int32_t rax_54 = sub_142890280(arg1)
                                                                int32_t rax_55
                                                                
                                                                if (rax_54 != 0)
                                                                    rax_55 = sub_1428d8f70(arg1, arg1, 
                                                                        *(arg3 + 0x30))
                                                                
                                                                if ((rax_54 == 0 || rax_55 != 0) &&
                                                                        sub_1428d9290(rax_2, arg1, 
                                                                        *(arg3 + 0x38), arg4) != 0
                                                                        && sub_1428d8f70(arg1, rax_2, r12)
                                                                        != 0)
                                                                    if (r13 s<= 0)
                                                                    label_1428d8392:
                                                                        r15_1 = arg2
                                                                    label_1428d8397:
                                                                        int64_t* r8_34 = *(arg3 + 0x20)
                                                                        
                                                                        if (r8_34 == 0)
                                                                            sub_142890ce0(arg1)
                                                                            var_88.d = 1
                                                                        else
                                                                            int64_t* r9_27 = *(arg3 + 0x18)
                                                                            
                                                                            if (r9_27 == 0)
                                                                                sub_142890ce0(arg1)
                                                                                var_88.d = 1
                                                                            else
                                                                                int32_t rax_69
                                                                                int64_t* rbx_10
                                                                                
                                                                                if (*(*(arg3 + 8) + 0x30)
                                                                                        != sub_1429060f0)
                                                                                    sub_142890ce0(arg1)
                                                                                    rbx_10 = rax_5
                                                                                    rax_69 = (*(*(arg3 + 8) + 0x30))(
                                                                                        rbx_10, arg1, *(arg3 + 0x20), 
                                                                                        *(arg3 + 0x18), arg4, *(arg3 + 0x78), 
                                                                                        var_a8, arg2, var_98, var_90, var_88, 
                                                                                        rax_4, rax_3, rax_5)
                                                                                else
                                                                                    rbx_10 = rax_5
                                                                                    rax_69 = sub_1429060f0(rbx_10, arg1, 
                                                                                        r8_34, r9_27, arg4, *(arg3 + 0x78))
                                                                                
                                                                                if (rax_69 != 0
                                                                                        && sub_1428d9010(rbx_10, rbx_10, r15_1)
                                                                                        != 0)
                                                                                    if (sub_142890300(rbx_10) != 0)
                                                                                        sub_142890ce0(arg1)
                                                                                        var_88.d = 1
                                                                                    else if (sub_14291a950(nullptr, rbx_10, 
                                                                                            rbx_10, *(arg3 + 0x18), arg4) != 0)
                                                                                        int32_t rax_74 = sub_142890280(rbx_10)
                                                                                        int32_t rax_75
                                                                                        
                                                                                        if (rax_74 != 0)
                                                                                            rax_75 = sub_1428d8f70(rbx_10, rbx_10, 
                                                                                                *(arg3 + 0x18))
                                                                                        
                                                                                        if (rax_74 == 0 || rax_75 != 0)
                                                                                            if (sub_142890300(rbx_10) != 0)
                                                                                                sub_142890ce0(arg1)
                                                                                                var_88.d = 1
                                                                                            else
                                                                                                int64_t* rax_77 = sub_142890500()
                                                                                                
                                                                                                if (rax_77 != 0)
                                                                                                    sub_142890a00(rax_77, *(arg3 + 0x28), 4)
                                                                                                    int32_t rax_79 = (
                                                                                                        *(*(arg3 + 8) + 0x30))(arg1, r15_1, 
                                                                                                        rax_77, *(arg3 + 0x18), arg4, 
                                                                                                        *(arg3 + 0x78), var_a8, arg2, var_98, 
                                                                                                        var_90, var_88, rax_4, rax_3, rax_5)
                                                                                                    sub_1428901a0(rax_77)
                                                                                                    
                                                                                                    if (rax_79 != 0)
                                                                                                        sub_142890ce0(arg1)
                                                                                                        var_88.d = 1
                                                                    else
                                                                        int64_t* rax_58 = sub_142890500()
                                                                        r15_2 = rax_58
                                                                        
                                                                        if (rax_58 != 0)
                                                                            int32_t r13_2 = 0
                                                                            
                                                                            if (var_90 s> 0)
                                                                                int64_t r12_2 = 0
                                                                                
                                                                                do
                                                                                    int64_t* rax_59 =
                                                                                        sub_142898ea0(*(arg3 + 0x58), r13_2)
                                                                                    
                                                                                    if (sub_1428d9010(rax_2, var_68[r12_2], 
                                                                                            arg1) == 0)
                                                                                        goto label_1428d7f8b
                                                                                    
                                                                                    rcx_59 = r15_2
                                                                                    
                                                                                    if (sub_1428d9290(rax_3, rax_2, 
                                                                                            rax_59[2], arg4) == 0)
                                                                                        goto label_1428d7f8e
                                                                                    
                                                                                    sub_142890a00(rcx_59, rax_3, 4)
                                                                                    
                                                                                    if (sub_14291a950(nullptr, rax_2, 
                                                                                            r15_2, *rax_59, arg4) == 0)
                                                                                        goto label_1428d7f8b
                                                                                    
                                                                                    if (sub_142890280(rax_2) != 0
                                                                                            && sub_1428d8f70(rax_2, rax_2, *rax_59)
                                                                                            == 0)
                                                                                        goto label_1428d7f8b
                                                                                    
                                                                                    if (sub_1428d9290(rax_2, rax_2, 
                                                                                            rax_59[3], arg4) == 0)
                                                                                        goto label_1428d7f8b
                                                                                    
                                                                                    if (sub_1428d8f70(arg1, arg1, rax_2)
                                                                                            == 0)
                                                                                        goto label_1428d7f8b
                                                                                    
                                                                                    r13_2 += 1
                                                                                    r12_2 += 1
                                                                                while (r12_2 s< var_90)
                                                                            
                                                                            sub_1428901a0(r15_2)
                                                                            goto label_1428d8392
                                            else
                                                int64_t* r12_1 = sub_142890500()
                                                int64_t* rax_41 = sub_142890500()
                                                
                                                if (rax_41 != 0 && r12_1 != 0)
                                                    var_a8 = 0
                                                    
                                                    if (rbx_6 s> 0)
                                                        int64_t rbx_7 = 0
                                                        
                                                        do
                                                            int64_t* rax_42 = sub_1428d8ba0(arg4)
                                                            var_68[rbx_7] = rax_42
                                                            
                                                            if (rax_42 == 0)
                                                                goto label_1428d83e5
                                                            
                                                            var_98 =
                                                                sub_142898ea0(*(arg3 + 0x58), var_a8)
                                                            sub_142890a00(rax_41, arg2, 4)
                                                            sub_142890a00(r12_1, var_98[1], 4)
                                                            
                                                            if (sub_14291a950(nullptr, rax_2, 
                                                                    rax_41, *var_98, arg4) == 0)
                                                                goto label_1428d83e5
                                                            
                                                            if ((*(*(arg3 + 8) + 0x30))(rax_42, 
                                                                    rax_2, r12_1, *var_98, arg4, var_98[4], 
                                                                    var_a8, arg2, var_98, var_90, var_88, 
                                                                    rax_4, rax_3, rax_5) == 0)
                                                                goto label_1428d83e5
                                                            
                                                            var_a8 += 1
                                                            rbx_7 += 1
                                                        while (rbx_7 s< var_90)
                                                    
                                                    sub_1428901a0(rax_41)
                                                    sub_1428901a0(r12_1)
                                                    r13 = var_a4
                                                    r12 = rax_4
                                                    goto label_1428d81a0
                                                
                                            label_1428d83e5:
                                                sub_1428901a0(rax_41)
                                            label_1428d83ed:
                                                sub_1428901a0(r12_1)
                            else
                                sub_1428901a0(r15_2)
                                sub_1428901a0(rax_33)
                else
                    r15_1 = arg2
                    
                    if (sub_1428ccba0(r12, r15_1, *(arg3 + 0x88), arg4) != 0
                            && sub_1428cd160(r12, r12, *(arg3 + 0x88), arg4) != 0 && sub_142906680(
                            r12, r12, *(arg3 + 0x48), *(arg3 + 0x38), arg4, *(arg3 + 0x88)) != 0
                            && sub_1428ccba0(rax_2, r15_1, *(arg3 + 0x80), arg4) != 0
                            && sub_1428cd160(rax_2, rax_2, *(arg3 + 0x80), arg4) != 0 &&
                            sub_142906680(rax_2, rax_2, *(arg3 + 0x40), *(arg3 + 0x30), arg4, 
                            *(arg3 + 0x80)) != 0
                            && sub_142908730(rax_2, rax_2, r12, *(arg3 + 0x30)) != 0
                            && sub_1428cd160(rax_2, rax_2, *(arg3 + 0x80), arg4) != 0
                            && sub_1428cd090(rax_2, rax_2, *(arg3 + 0x50), *(arg3 + 0x80), arg4)
                            != 0 && sub_1428d92d0(arg1, rax_2, *(arg3 + 0x38), arg4) != 0
                            && sub_142908540(arg1, arg1, r12, *(arg3 + 0x18)) != 0)
                        goto label_1428d8397
        else
            int64_t* rax_8 = sub_142890500()
            
            if (rax_8 != 0)
                sub_142890a00(rax_8, *(arg3 + 0x30), 4)
                
                if (sub_1428cc990(arg3 + 0x80, *(arg3 + 0xa8), rax_8, arg4) == 0)
                label_1428d83ed_1:
                    sub_1428901a0(rax_8)
                else
                    sub_142890a00(rax_8, *(arg3 + 0x38), 4)
                    
                    if (sub_1428cc990(arg3 + 0x88, *(arg3 + 0xa8), rax_8, arg4) != 0)
                        if (r13 s> 0)
                            do
                                int64_t** rax_11 = sub_142898ea0(*(arg3 + 0x58), r15)
                                sub_142890a00(rax_8, *rax_11, 4)
                                
                                if (sub_1428cc990(&rax_11[4], *(arg3 + 0xa8), rax_8, arg4) == 0)
                                    goto label_1428d83ed_2
                                
                                r15 += 1
                            while (r15 s< r13)
                        
                        sub_1428901a0(rax_8)
                        int32_t rax_14
                        int32_t rax_15
                        
                        if (r13 == 0 && *(*(arg3 + 8) + 0x30) == sub_1429060f0)
                            rax_14 = sub_142890560(*(arg3 + 0x38))
                            rax_15 = sub_142890560(*(arg3 + 0x30))
                        
                        if (r13 != 0 || *(*(arg3 + 8) + 0x30) != sub_1429060f0 || rax_14 != rax_15)
                            rbx = 0
                        else
                            rbx = r13 + 1
                        
                        rax_16 = (*(arg3 + 0x74)).b
                        r12 = rax_4
                        goto label_1428d7dbf
                    
                label_1428d83ed_2:
                    sub_1428901a0(rax_8)

sub_1428d8a60(arg4)
__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(var_88.d)
