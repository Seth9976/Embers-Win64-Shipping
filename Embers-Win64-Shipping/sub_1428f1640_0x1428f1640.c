// 函数: sub_1428f1640
// 地址: 0x1428f1640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = arg1
int32_t* rsi = arg3
int32_t* rbx = nullptr
int32_t* rdi = nullptr
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result != 0)
    int32_t r15_1 = 0
    
    if (rax s<= 0)
        return result
    
    while (true)
        void* rax_1 = sub_142898ea0(rsi, r15_1)
        
        if (*(rax_1 + 0x10) != 0)
            int32_t* rax_11 = sub_14292cfd0(rbp, arg2, rax_1)
            rdi = rax_11
            
            if (rax_11 == 0)
                rbx = nullptr
                goto label_1428f187f
            
            int32_t* rax_12 = sub_1428e7a40()
            rbx = rax_12
            
            if (rax_12 == 0)
                break
            
            if (sub_142898d50(rax_12, rdi) == 0)
                break
            
            rdi = nullptr
            void** rax_14 = sub_1428db530(&data_1435173e0)
            
            if (rax_14 == 0)
                break
            
            sub_142898d50(result, rax_14)
            void* rax_15 = sub_1428db530(&data_143517350)
            *rax_14 = rax_15
            
            if (rax_15 == 0)
                break
            
            *(rax_15 + 8) = rbx
            **rax_14 = 0
        else
            int32_t* rax_2 = sub_1428f8e70(arg2, *(rax_1 + 8))
            
            if (rax_2 == 0)
            label_1428f184d:
                rbx = nullptr
                rdi = nullptr
                goto label_1428f187f
            
            void** rax_3 = sub_1428db530(&data_1435173e0)
            void** rdi_1 = rax_3
            
            if (rax_3 == 0)
            label_1428f179b:
                sub_1428c3d60(rdi_1, &data_1435173e0)
                rdi_1 = nullptr
            else
                int32_t rsi_1 = 0
                
                if (sub_142898c70(rax_2) s> 0)
                    int32_t rax_10
                    
                    do
                        void* rax_5 = sub_142898ea0(rax_2, rsi_1)
                        int32_t rax_6 = sub_1428f2160(rdi_1, arg2, rax_5)
                        
                        if (rax_6 s<= 0)
                            if (rax_6 s< 0)
                                goto label_1428f179b
                            
                            char* _Str1 = *(rax_5 + 8)
                            bool cond:1_1
                            
                            for (int64_t i = 0; i != 8; )
                                char rcx_6 = _Str1[i]
                                i += 1
                                
                                if (rcx_6 != *(i + 0x143517697))
                                    if (strcmp(_Str1, "CRLissuer") != 0)
                                        goto label_1428f1780
                                    
                                    int32_t* rax_9 = sub_1428f1e60(arg2, *(rax_5 + 0x10))
                                    rdi_1[2] = rax_9
                                    cond:1_1 = rax_9 == 0
                                    goto label_1428f177b
                            
                            cond:1_1 = sub_1428f2350(&rdi_1[1], *(rax_5 + 0x10)) == 0
                        label_1428f177b:
                            
                            if (cond:1_1)
                                goto label_1428f179b
                        
                    label_1428f1780:
                        rsi_1 += 1
                        rax_10 = sub_142898c70(rax_2)
                    while (rsi_1 s< rax_10)
            
            sub_1428f8ed0(arg2, rax_2)
            
            if (rdi_1 == 0)
                goto label_1428f184d
            
            sub_142898d50(result, rdi_1)
            rbp = arg1
        
        r15_1 += 1
        
        if (r15_1 s>= rax)
            return result
        
        rsi = arg3

sub_1428a5670(0x22, 0x86, 0x41, "crypto\x509v3\v3_crld.c", 0x11d)
label_1428f187f:
sub_1428e7b70(rdi)
sub_1428e7a10(rbx)
sub_142898cb0(result, sub_1428f1d50)
return nullptr
