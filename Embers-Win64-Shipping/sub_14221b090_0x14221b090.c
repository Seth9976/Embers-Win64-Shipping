// 函数: sub_14221b090
// 地址: 0x14221b090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax

if ((arg1[0xb].b & 8) == 0 && arg2 != arg1[0x4b])
    rax = arg1
    
    while (rax != arg3)
        rax = rax[0x1c]
        
        if (rax == 0)
            rax = arg1
            
            while (rax != arg2)
                rax = rax[0x1c]
                
                if (rax == 0)
                    if (arg1 != arg3 && arg3
                            != Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1))
                        rax = (*(*arg1 + 0x508))(arg1, arg3)
                        
                        if (rax.b == 0)
                            if (arg3 != 0)
                                rax = (*(*arg3 + 0x508))(arg3, arg1)
                            
                            if (arg3 == 0 || rax.b == 0)
                                if ((arg1[0xb].b & 0x24) != 0)
                                    int64_t* rcx_2 = arg1[0x26]
                                    
                                    if (rcx_2 != 0)
                                        rax = (*(*rcx_2 + 0x4c8))(rcx_2)
                                    
                                    if (rcx_2 == 0 || rax.d == 0)
                                        rax.b = 0
                                        return rax
                                
                                void* rax_5 = (*(*arg1 + 0x630))(arg1)
                                int64_t* rsi
                                
                                if (rax_5 == 0)
                                    rsi = nullptr
                                else
                                    rsi = *(rax_5 + 0xa0)
                                
                                if (rax_5 != 0 && rsi != 0 && (*(*arg1 + 0x628))(arg1) != 0)
                                    void* rax_8 = sub_142591550()
                                    void* rcx_5 = *(rax_5 + 0x10)
                                    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                                    
                                    if (rax_9.d s> *(rcx_5 + 0x38))
                                        if (rsi == arg1[0x1c])
                                            return (*(*rsi + 0x460))(rsi, arg2, arg3, arg4)
                                    else if (*(*(rcx_5 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30
                                            || rsi == arg1[0x1c])
                                        return (*(*rsi + 0x460))(rsi, arg2, arg3, arg4)
                                
                                int64_t* rax_13 = sub_1424b0d70()
                                void* rax_12 = rax_13[0x23]
                                
                                if (rax_12 == 0)
                                    int64_t rdx_4 = *rax_13
                                    (*(rdx_4 + 0x390))(rax_13, rdx_4)
                                    rax_12 = rax_13[0x23]
                                
                                if (*(rax_12 + 0x2c1) == 0)
                                    rax_12.b = 1
                                else
                                    rax_12 = sub_141dce760(arg1, arg4)
                                    
                                    if (rax_12.b != 0)
                                        rax_12.b = 1
                                
                                return rax_12
                    
                    break
            
            break

rax.b = 1
return rax
