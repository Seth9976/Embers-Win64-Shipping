// 函数: sub_1428da340
// 地址: 0x1428da340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r15 = 0
sub_1428d8e50(arg4)
int64_t* rbx = sub_1428d8ba0(arg4)
int64_t* rax_1 = sub_1428d8ba0(arg4)
int64_t* rsi = rax_1

if (rax_1 != 0 && sub_142890040(rbx, arg2) != 0 && sub_142890040(rsi, arg3) != 0)
    rbx[2].d = 0
    rsi[2].d = 0
    
    if (sub_14288fc80(rbx, rsi) s< 0)
        int64_t* rax_5 = rbx
        rbx = rsi
        rsi = rax_5
    
    int32_t r14_1 = 0
    
    if (sub_142890300(rsi) == 0)
        while (true)
            int32_t rax_7 = sub_142890290(rbx)
            int32_t rax_8 = sub_142890290(rsi)
            int64_t* rdx_5
            
            if (rax_7 != 0)
                int64_t* rcx_10
                int64_t* rdx_4
                
                if (rax_8 == 0)
                    rdx_4 = rsi
                    rcx_10 = rsi
                else
                    if (sub_1428d9010(rbx, rbx, rsi) == 0)
                        goto label_1428da4ce
                    
                    rdx_4 = rbx
                    rcx_10 = rbx
                
                if (sub_1428f5900(rcx_10, rdx_4) == 0)
                    goto label_1428da4ce
                
                rdx_5 = rsi
                goto label_1428da460
            
            if (sub_1428f5900(rbx, rbx) == 0)
                goto label_1428da4ce
            
            rdx_5 = rsi
            
            if (rax_8 == 0)
                if (sub_1428f5900(rsi, rdx_5) == 0)
                    goto label_1428da4ce
                
                r14_1 += 1
            else
            label_1428da460:
                
                if (sub_14288fc80(rbx, rdx_5) s< 0)
                    int64_t* rax_13 = rbx
                    rbx = rsi
                    rsi = rax_13
            
            if (sub_142890300(rsi) != 0)
                if (r14_1 == 0)
                    break
                
                if (sub_1428f5510(rbx, rbx, r14_1) == 0)
                    goto label_1428da4ce
                
                break
    
    if (rbx != 0 && sub_142890040(arg1, rbx) != 0)
        r15 = 1

label_1428da4ce:
sub_1428d8a60(arg4)
return zx.q(r15)
