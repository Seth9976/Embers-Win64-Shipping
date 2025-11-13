// 函数: sub_142974910
// 地址: 0x142974910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* result = arg1
int32_t rax = sub_142890290(arg3)
int32_t rax_1

if (rax != 0)
    rax_1 = sub_14288fa30(arg3, 1)

if (rax == 0 || rax_1 != 0)
    if (sub_14288fa30(arg3, 2) == 0)
        sub_1428a5670(3, 0x79, 0x70, "crypto\bn\bn_sqrt.c", 0x29)
    else
        int64_t* result_3
        
        if (arg1 == 0)
            result_3 = sub_142890500()
            result = result_3
        
        if (arg1 == 0 && result_3 == 0)
        label_142975023:
            sub_1428d8a60(arg4)
            return nullptr
        
        if (sub_142890900(result, sx.q(sub_142890240(arg2, 0))) != 0)
            return result
        
    label_14297504c:
        
        if (result != arg1)
            sub_1428901a0(result)
    
    return nullptr

int32_t rax_2 = sub_142890300(arg2)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428902b0(arg2)

if (rax_2 != 0 || rax_3 != 0)
    int64_t* result_2
    
    if (arg1 == 0)
        result_2 = sub_142890500()
        result = result_2
    
    if (arg1 == 0 && result_2 == 0)
        goto label_142975023
    
    if (sub_142890900(result, sx.q(sub_1428902b0(arg2))) == 0)
        goto label_14297504c
    
    return result

sub_1428d8e50(arg4)
int64_t* rax_4 = sub_1428d8ba0(arg4)
int64_t* rax_5 = sub_1428d8ba0(arg4)
int64_t* rax_6 = sub_1428d8ba0(arg4)
int64_t* rax_7 = sub_1428d8ba0(arg4)
int64_t* rax_8 = sub_1428d8ba0(arg4)
int64_t* rax_9 = sub_1428d8ba0(arg4)

if (rax_9 == 0)
    goto label_142975023

int64_t* result_1

if (arg1 == 0)
    result_1 = sub_142890500()
    result = result_1

if (arg1 == 0 && result_1 == 0)
    goto label_142975023

if (sub_1429084c0(rax_4, arg2, arg3, arg4) != 0)
    int32_t rbx_1 = 1
    int32_t rax_11 = sub_142890240(arg3, 1)
    
    if (rax_11 == 0)
        int32_t i
        
        do
            rbx_1 += 1
            i = sub_142890240(arg3, rbx_1)
        while (i == 0)
    
    int32_t var_58
    int32_t var_58_1
    int64_t* rbx_2
    int64_t* rsi_2
    int32_t r8_9
    
    if (rax_11 != 0 || rbx_1 == 1)
        if (sub_1428f5760(rax_6, arg3, 2) != 0)
            rax_6[2].d = 0
            
            if (sub_1428f4ee0(rax_6, 1) != 0)
                rbx_2 = rax_4
                var_58.q = arg4
                
                if (sub_142905ff0(result, rbx_2, rax_6, arg3, var_58) != 0)
                    rsi_2 = rax_8
                label_142974f6f:
                    
                    if (sub_1429083a0(rsi_2, result, arg3, arg4) != 0)
                        if (sub_14288fc80(rsi_2, rbx_2) == 0)
                            sub_1428d8a60(arg4)
                            return result
                        
                        var_58_1 = 0x158
                    label_142974f93:
                        r8_9 = 0x6f
                    label_142974fa8:
                        sub_1428a5670(3, 0x79, r8_9, "crypto\bn\bn_sqrt.c", var_58_1)
    else if (rbx_1 != 2)
        if (sub_142890040(rax_6, arg3) != 0)
            rax_6[2].d = 0
            int32_t rsi_3 = 2
            
            while (true)
                if (rsi_3 s< 0x16)
                label_142974bf2:
                    
                    if (sub_142890900(rax_9, sx.q(rsi_3)) == 0)
                        break
                else
                    if (sub_142919890(rax_9, sub_142890560(arg3), 0, 0) == 0)
                        break
                    
                    if (sub_1428909a0(rax_9, arg3) s>= 0)
                        int64_t* (* rax_25)(int64_t* arg1, int64_t* arg2, int64_t* arg3) =
                            sub_1428d9010
                        
                        if (arg3[2].d != 0)
                            rax_25 = sub_1428d8f70
                        
                        if (rax_25(rax_9, rax_9, arg3) == 0)
                            break
                    
                    if (sub_142890300(rax_9) != 0)
                        goto label_142974bf2
                
                int32_t rax_29 = sub_142974680(rax_9, rax_6, arg4)
                
                if (rax_29 s< 0xffffffff)
                    break
                
                if (rax_29 == 0)
                    var_58_1 = 0xc7
                    r8_9 = 0x70
                    goto label_142974fa8
                
                if (rax_29 != 1)
                    if (rax_29 != 0xffffffff)
                        var_58_1 = 0xd3
                        r8_9 = 0x71
                        goto label_142974fa8
                    
                    if (sub_1428f5760(rax_6, rax_6, rbx_1) == 0)
                        break
                    
                    var_58.q = arg4
                    
                    if (sub_142905ff0(rax_9, rax_9, rax_6, arg3, var_58) == 0)
                        break
                    
                    if (sub_1428902b0(rax_9) != 0)
                        var_58_1 = 0xe2
                        r8_9 = 0x70
                        goto label_142974fa8
                    
                    if (sub_1428f5900(rax_7, rax_6) == 0)
                        break
                    
                    if (sub_142890300(rax_7) == 0)
                        rsi_2 = rax_8
                        var_58.q = arg4
                        
                        if (sub_142905ff0(rsi_2, rax_4, rax_7, arg3, var_58) == 0)
                            break
                        
                        if (sub_142890300(rsi_2) != 0)
                        label_142974cf5:
                            sub_142890900(result, 0)
                            sub_1428d8a60(arg4)
                            return result
                    else
                        if (sub_1429084c0(rax_7, rax_4, arg3, arg4) == 0)
                            break
                        
                        if (sub_142890300(rax_7) != 0)
                            goto label_142974cf5
                        
                        rsi_2 = rax_8
                        
                        if (sub_142890900(rsi_2, 1) == 0)
                            break
                    
                    if (sub_1429083a0(rax_5, rsi_2, arg3, arg4) == 0)
                        break
                    
                    var_58.q = arg4
                    
                    if (sub_1429082e0(rax_5, rax_5, rax_4, arg3, var_58) == 0)
                        break
                    
                    var_58.q = arg4
                    
                    if (sub_1429082e0(rsi_2, rsi_2, rax_4, arg3, var_58) == 0)
                        break
                    
                    if (sub_1428902b0(rax_5) != 0)
                    label_142974ed8:
                        
                        if (sub_142890040(result, rsi_2) == 0)
                            break
                        
                        rbx_2 = rax_4
                        goto label_142974f6f
                    
                    while (true)
                        int32_t rsi_4 = 1
                        
                        if (sub_1429083a0(rax_7, rax_5, arg3, arg4) == 0)
                            break
                        
                        if (sub_1428902b0(rax_7) == 0)
                            while (true)
                                rsi_4 += 1
                                
                                if (rsi_4 == rbx_1)
                                    var_58_1 = 0x136
                                    goto label_142974f93
                                
                                var_58.q = arg4
                                
                                if (sub_1429082e0(rax_7, rax_7, rax_7, arg3, var_58) == 0)
                                    break
                                
                                if (sub_1428902b0(rax_7) != 0)
                                    goto label_142974e2a
                            
                            break
                        
                    label_142974e2a:
                        
                        if (sub_142890040(rax_7, rax_9) == 0)
                            break
                        
                        int32_t rbx_4 = rbx_1 - rsi_4 - 1
                        
                        if (rbx_4 s> 0)
                            while (sub_1429083a0(rax_7, rax_7, arg3, arg4) != 0)
                                rbx_4 -= 1
                                
                                if (rbx_4 s<= 0)
                                    goto label_142974e62
                            
                            break
                        
                    label_142974e62:
                        var_58.q = arg4
                        
                        if (sub_1429082e0(rax_9, rax_7, rax_7, arg3, var_58) == 0)
                            break
                        
                        var_58.q = arg4
                        
                        if (sub_1429082e0(rax_8, rax_8, rax_7, arg3, var_58) == 0)
                            break
                        
                        var_58.q = arg4
                        
                        if (sub_1429082e0(rax_5, rax_5, rax_9, arg3, var_58) == 0)
                            break
                        
                        rbx_1 = rsi_4
                        
                        if (sub_1428902b0(rax_5) != 0)
                            rsi_2 = rax_8
                            goto label_142974ed8
                    
                    break
                
                rsi_3 += 1
                
                if (rsi_3 s>= 0x52)
                    var_58_1 = 0xd3
                    r8_9 = rax_29 + 0x70
                    goto label_142974fa8
    else
        rbx_2 = rax_4
        
        if (sub_142908180(rax_7, rbx_2, arg3) != 0 && sub_1428f5760(rax_6, arg3, 3) != 0)
            rax_6[2].d = 0
            var_58.q = arg4
            
            if (sub_142905ff0(rax_5, rax_7, rax_6, arg3, var_58) != 0
                    && sub_1429083a0(rax_9, rax_5, arg3, arg4) != 0)
                var_58.q = arg4
                
                if (sub_1429082e0(rax_7, rax_7, rax_9, arg3, var_58) != 0
                        && sub_1428f53f0(rax_7, 1) != 0)
                    var_58.q = arg4
                    rsi_2 = rax_8
                    
                    if (sub_1429082e0(rsi_2, rbx_2, rax_5, arg3, var_58) != 0)
                        var_58.q = arg4
                        
                        if (sub_1429082e0(rsi_2, rsi_2, rax_7, arg3, var_58) != 0
                                && sub_142890040(result, rsi_2) != 0)
                            goto label_142974f6f

if (result == arg1)
    goto label_142975023

sub_14288fbf0(result)
sub_1428d8a60(arg4)
return nullptr
