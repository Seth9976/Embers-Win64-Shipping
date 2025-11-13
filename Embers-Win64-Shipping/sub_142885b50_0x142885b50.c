// 函数: sub_142885b50
// 地址: 0x142885b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int32_t r15 = 0

if ((**(arg1 + 0xa8) & 0x800) == 0)
    return 2

if (*(*(arg1 + 0x598) + 0xd0) != 0)
    if (sub_142873b60(arg2, 0x2c, 2) == 0)
    label_142885fde:
        sub_142856580(arg1, 0x50, 0x265, 0x44, "ssl\statem\extensions_srvr.c", 0x6f9)
    else
        if (sub_142873e80(arg2, 2) == 0)
            goto label_142885fde
        
        if (sub_142873e80(arg2, 2) == 0)
            goto label_142885fde
        
        int64_t var_30
        
        if (sub_142873850(arg2, &var_30) == 0)
            goto label_142885fde
        
        int64_t var_58
        
        if (sub_142873c80(arg2, 0x1072, &var_58) == 0)
            goto label_142885fde
        
        if (sub_142873b60(arg2, 0, 2) == 0)
            goto label_142885fde
        
        if (sub_142873b60(arg2, 0x304, 2) == 0)
            goto label_142885fde
        
        if (sub_142873b60(arg2, zx.d(*(*(arg1 + 0xa8) + 0x406)), 2) == 0)
            goto label_142885fde
        
        void var_20
        
        if ((*(*(arg1 + 8) + 0x98))(*(*(arg1 + 0xa8) + 0x238), arg2, &var_20) == 0)
            goto label_142885fde
        
        int32_t rdx_3
        rdx_3.b = *(*(arg1 + 0xa8) + 0x408) == 0
        
        if (sub_142873b60(arg2, rdx_3, 1) == 0)
            goto label_142885fde
        
        if (sub_142873b60(arg2, _time64(nullptr), 4) == 0)
            goto label_142885fde
        
        if (sub_142873e80(arg2, 2) == 0)
            goto label_142885fde
        
        int64_t var_78
        
        if (sub_142873c80(arg2, 0x40, &var_78) == 0)
            goto label_142885fde
        
        if (sub_1428821e0(arg1, 0) != 0)
            int64_t var_50
            int32_t rax_21
            int512_t zmm1_1
            rax_21, zmm1_1 = sub_142851d80(arg1, var_78, 0x40, &var_50)
            int64_t var_48
            
            if (rax_21 != 0)
                if (sub_142873640(arg2, var_50, &var_48) == 0 || var_78 != var_48)
                label_142885fd4:
                    sub_142856580(arg1, 0x50, 0x265, 0x44, "ssl\statem\extensions_srvr.c", 0x70e)
                else
                    if (sub_1428736e0(arg2) == 0)
                        goto label_142885fd4
                    
                    if (sub_142873e80(arg2, 1) == 0)
                        goto label_142885fd4
                    
                    int64_t var_70
                    
                    if (sub_142873c80(arg2, 0x1000, &var_70) == 0)
                        goto label_142885fd4
                    
                    int64_t var_40
                    
                    if ((*(*(arg1 + 0x598) + 0xd0))(arg1, var_70, &var_40) != 0)
                        int32_t var_80_1
                        int64_t var_38
                        
                        if (sub_142873640(arg2, var_40, &var_38) == 0 || var_70 != var_38)
                            var_80_1 = 0x71f
                        else
                            int64_t arg_8
                            
                            if (sub_1428736e0(arg2) == 0)
                                var_80_1 = 0x71f
                            else
                                int64_t var_60
                                
                                if (sub_142873850(arg2, &arg_8) == 0)
                                    var_80_1 = 0x71f
                                else if (sub_142873c80(arg2, 0x20, &var_60) == 0)
                                    var_80_1 = 0x71f
                                else
                                    int64_t rax_35 = arg_8 - var_30
                                    int64_t var_68 = 0x20
                                    arg_8 = rax_35
                                    
                                    if (rax_35 u<= 0x1052)
                                        int64_t* rax_36 = sub_142891ee0()
                                        int64_t* rax_37 = sub_1428969b0(0x357, nullptr, 
                                            *(arg1 + 0x738) + 0x298, 0x20)
                                        
                                        if (rax_36 == 0 || rax_37 == 0)
                                            sub_142856580(arg1, 0x50, 0x265, 0x41, 
                                                "ssl\statem\extensions_srvr.c", 0x733)
                                        else
                                            int32_t rax_38 = sub_1428932d0(rax_36, nullptr, 
                                                &data_1434e91b0, nullptr, rax_37)
                                            int32_t rax_40
                                            
                                            if (rax_38 s> 0)
                                                int64_t var_88_2 = arg_8
                                                rax_40 = sub_142893060(rax_36, var_60, &var_68, 
                                                    var_58, zmm1_1, arg3)
                                            
                                            if (rax_38 s<= 0 || rax_40 s<= 0)
                                                sub_142856580(arg1, 0x50, 0x265, 0x44, 
                                                    "ssl\statem\extensions_srvr.c", 0x73b)
                                            else
                                                int64_t rdx_11 = var_68
                                                int64_t var_28
                                                
                                                if (arg_8 + rdx_11 u<= 0x1072)
                                                    if (sub_142873640(arg2, rdx_11, &var_28) == 0)
                                                    label_142885f58:
                                                        sub_142856580(arg1, 0x50, 0x265, 0x44, 
                                                            "ssl\statem\extensions_srvr.c", 0x74b)
                                                    else
                                                        int64_t rax_42 = var_60
                                                        
                                                        if (rax_42 != var_28
                                                                || var_58 != rax_42 - arg_8)
                                                            goto label_142885f58
                                                        
                                                        if (sub_1428736e0(arg2) == 0)
                                                            goto label_142885f58
                                                        
                                                        if (sub_1428736e0(arg2) == 0)
                                                            goto label_142885f58
                                                        
                                                        r15 = 1
                                                else
                                                    sub_142856580(arg1, 0x50, 0x265, 0x44, 
                                                        "ssl\statem\extensions_srvr.c", 0x741)
                                        
                                        sub_142891ea0(rax_36)
                                        sub_1428965a0(rax_37)
                                        return zx.q(r15)
                                    
                                    var_80_1 = 0x727
                        
                        sub_142856580(arg1, 0x50, 0x265, 0x44, "ssl\statem\extensions_srvr.c", 
                            var_80_1)
                    else
                        sub_142856580(arg1, 0x50, 0x265, 0x190, "ssl\statem\extensions_srvr.c", 
                            0x715)
else
    sub_142856580(arg1, 0x50, 0x265, 0x11f, "ssl\statem\extensions_srvr.c", 0x6e5)

return 0
