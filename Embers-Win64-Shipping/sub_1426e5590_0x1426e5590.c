// 函数: sub_1426e5590
// 地址: 0x1426e5590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x50))

if (result.d == 0xffffffff || arg2 == 0xffffffff
        || (arg2 != result.d && arg2 != 0 && result.d != 0))
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    arg2.b = 1
    result = sub_140d3e170(arg1 + 0x48, arg2.b, 0)
    
    if (result.b != 0)
        wchar16* i_1 = nullptr
        
        for (wchar16* i = wcsstr(&UAIAsyncTaskBlueprintProxy::OnMoveCompleted", ::"); i != 0; 
                i = wcsstr(&i[1], ::"))
            i_1 = i
        
        void* arg_8
        sub_140b58260(&arg_8, &i_1[2], 1)
        void* rax = sub_140d3c6e0(arg1 + 0x48)
        void* rbx_1 = arg_8
        int64_t* r14_1 = rax + 0x310
        void* r12_1 = *r14_1
        void* rdi_1 = r12_1
        void* rbp_3 = (sx.q(r14_1[1].d) << 4) + r12_1
        
        if (r12_1 != rbp_3)
            do
                if (*(rdi_1 + 8) == rbx_1)
                    rax.b = arg1 == sub_140d3cab0(rdi_1)
                
                if (*(rdi_1 + 8) != rbx_1 || rax.b == 0)
                    rax.b = 0
                else
                    rax = 1
                
                if (rax.b != 0)
                    int32_t rdi_3 = ((rdi_1 - r12_1) s>> 4).d
                    
                    if (rdi_3 != 0xffffffff)
                        int32_t rdx_1 = r14_1[1].d
                        int32_t rcx_7 = rdx_1 - rdi_3 - 1
                        
                        if (rcx_7 s>= 1)
                            rcx_7 = 1
                        
                        if (rcx_7 != 0)
                            memcpy((sx.q(rdi_3) << 4) + *r14_1, 
                                (sx.q(rdx_1 - rcx_7) << 4) + *r14_1, rcx_7 << 4)
                            rdx_1 = r14_1[1].d
                        
                        r14_1[1].d = rdx_1 - 1
                    
                    break
                
                rdi_1 += 0x10
            while (rdi_1 != rbp_3)
        
        sub_1408f4c10(r14_1)
        int64_t* rcx_12
        
        if (arg3 != 0)
            arg_8.b = arg3.b
            rcx_12 = arg1 + 0x38
        else
            arg_8.b = arg3.b
            rcx_12 = arg1 + 0x28
        
        sub_1405a9f90(rcx_12, &arg_8)
        result = sub_140d3c6e0(arg1 + 0x54)
        
        if (result != 0)
            void* rbx_2 = *(result + 0x138)
            
            if (rbx_2 != 0)
                void* rax_2 = sub_14272b250()
                void* rdx_7 = *(rbx_2 + 0x10)
                result = sx.q(*(rax_2 + 0x38))
                
                if (result.d s<= *(rdx_7 + 0x38))
                    uint64_t result_1 = result
                    result = *(rdx_7 + 0x30)
                    
                    if (*(result + (result_1 << 3)) == rax_2 + 0x30)
                        arg_8 = arg1
                        return sub_1426e81c0(rbx_2 + 0xb8, &arg_8)

return result
