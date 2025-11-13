// 函数: sub_14292f200
// 地址: 0x14292f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* rax = sub_1428e91e0(arg3)
int32_t rax_1 = sub_142898c70(rax)

if (rax == 0)
    sub_1428a5670(0x22, 0x82, 0x22, "crypto\x509v3\v3_cpols.c", 0x65)
    return 0

int32_t* result = sub_142898be0(0, rax_1)
int32_t var_48_1

if (result != 0)
    int32_t r14_1 = 0
    int32_t rsi_1 = 0
    
    if (rax_1 s<= 0)
    label_14292f3ae:
        sub_142898cb0(rax, sub_1428e8d70)
        return result
    
    while (true)
        int64_t* rax_3 = sub_142898ea0(rax, rsi_1)
        char* r8
        
        if (rax_3[2] == 0)
            r8 = rax_3[1]
        
        int32_t var_48_2
        int32_t r8_2
        
        if (rax_3[2] != 0 || r8 == 0)
            var_48_2 = 0x75
            r8_2 = 0x86
        else
            int64_t rcx_3 = 0
            
            while (true)
                char rax_4 = r8[rcx_3]
                rcx_3 += 1
                
                if (rax_4 != *(rcx_3 + 0x143538193))
                    break
                
                if (rcx_3 == 7)
                    r14_1 = (rcx_3 - 6).d
                    goto label_14292f399
            
            void** rbx_2
            
            if (*r8 != 0x40)
                void* rax_7 = sub_1428a9db0(r8, 0)
                
                if (rax_7 == 0)
                    var_48_2 = 0x8d
                    r8_2 = 0x6e
                else
                    void** rax_8 = sub_1428db530(&data_143537e80)
                    rbx_2 = rax_8
                    
                    if (rax_8 == 0)
                        sub_1428cd400(rax_7)
                        var_48_1 = 0x94
                        break
                    
                    *rax_8 = rax_7
                label_14292f389:
                    
                    if (sub_142898d50(result, rbx_2) == 0)
                        sub_1428c3d60(rbx_2, &data_143537e80)
                        var_48_1 = 0x9b
                        break
                    
                label_14292f399:
                    rsi_1 += 1
                    
                    if (rsi_1 s>= rax_1)
                        goto label_14292f3ae
                    
                    continue
            else
                int32_t* rax_5 = sub_1428f8e70(arg2, &r8[1])
                
                if (rax_5 != 0)
                    rbx_2 = sub_14292f9d0(arg2, rax_5, r14_1)
                    sub_1428f8ed0(arg2, rax_5)
                    
                    if (rbx_2 == 0)
                        goto label_14292f492
                    
                    goto label_14292f389
                
                var_48_2 = 0x81
                r8_2 = 0x87
        
        sub_1428a5670(0x22, 0x82, r8_2, "crypto\x509v3\v3_cpols.c", var_48_2)
        *rax_3
        int64_t var_38_1 = rax_3[2]
        char const* const var_40_1 = ",value:"
        var_48_2.q = rax_3[1]
        sub_1428a4880(6)
        goto label_14292f492
else
    var_48_1 = 0x6b

sub_1428a5670(0x22, 0x82, 0x41, "crypto\x509v3\v3_cpols.c", var_48_1)
label_14292f492:
sub_142898cb0(rax, sub_1428e8d70)
sub_142898cb0(result, sub_14292f4c0)
return nullptr
