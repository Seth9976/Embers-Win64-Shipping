// 函数: sub_141049460
// 地址: 0x141049460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg4 != 0)
    *arg4 = 0

if (arg2 == 1)
    enum D3D_ROOT_SIGNATURE_VERSION Version = arg1->Version
    
    if (Version == D3D_ROOT_SIGNATURE_VERSION_1)
        return D3D12SerializeRootSignature(&arg1->Anonymous.Desc_1_0, D3D_ROOT_SIGNATURE_VERSION_1, 
            arg3, arg4) __tailcall
    
    if (Version == 2)
        uint64_t dwBytes = zx.q(arg1->Anonymous.Desc_1_0.d) << 5
        HRESULT r15 = 0
        int64_t lpMem
        
        if (dwBytes == 0)
            lpMem = 0
        else
            lpMem = HeapAlloc(GetProcessHeap(), HEAP_NONE, dwBytes)
        
        if (dwBytes == 0 || lpMem != 0)
            int32_t Desc_1_0 = arg1->Anonymous.Desc_1_0.d
            int32_t r12_1 = 0
            
            if (Desc_1_0 == 0)
            label_141049696:
                struct D3D12_ROOT_SIGNATURE_DESC rootSignature
                rootSignature.NumParameters = Desc_1_0
                rootSignature.NumStaticSamplers = arg1->Anonymous.Desc_1_0.__offset(0x10).d
                rootSignature.pStaticSamplers = arg1->Anonymous.Desc_1_0.__offset(0x18).q
                rootSignature.Flags = arg1->Anonymous.Desc_1_0.__offset(0x20).d
                rootSignature.pParameters = lpMem
                r15 = D3D12SerializeRootSignature(&rootSignature, D3D_ROOT_SIGNATURE_VERSION_1, 
                    arg3, arg4)
            else
                do
                    uint64_t rdx_4 = zx.q(r12_1) << 5
                    int32_t* rsi_1 = rdx_4 + lpMem
                    *rsi_1 = *(rdx_4 + arg1->Anonymous.Desc_1_0.__offset(0x8).q)
                    rsi_1[6] = *(arg1->Anonymous.Desc_1_0.__offset(0x8).q + rdx_4 + 0x18)
                    int32_t* rdi_2 = arg1->Anonymous.Desc_1_0.__offset(0x8).q + rdx_4
                    int32_t rax_7 = *rdi_2
                    
                    if (rax_7 == 0)
                        uint64_t rax_14 = zx.q(rdi_2[2])
                        uint64_t dwBytes_1 = rax_14 * 0x14
                        int64_t r10_2
                        
                        if (dwBytes_1 == 0 || r15 s< 0)
                            r10_2 = 0
                        else
                            r10_2 = HeapAlloc(GetProcessHeap(), HEAP_NONE, dwBytes_1)
                            rax_14 = zx.q(rdi_2[2])
                        
                        if (dwBytes_1 != 0 && r10_2 == 0)
                            r15 = E_OUTOFMEMORY
                        
                        int32_t rcx_5 = rax_14.d
                        
                        if (r15 s>= 0)
                            int32_t r9_1 = 0
                            
                            if (rax_14.d != 0)
                                do
                                    uint64_t rcx_8 = zx.q(r9_1)
                                    r9_1 += 1
                                    uint64_t r8_4 = rcx_8 * 0x18
                                    int32_t* rdx_5 = r10_2 + rcx_8 * 0x14
                                    rdx_5[2] = *(r8_4 + *(rdi_2 + 0x10) + 8)
                                    rdx_5[1] = *(r8_4 + *(rdi_2 + 0x10) + 4)
                                    rdx_5[4] = *(r8_4 + *(rdi_2 + 0x10) + 0x14)
                                    *rdx_5 = *(r8_4 + *(rdi_2 + 0x10))
                                    rdx_5[3] = *(r8_4 + *(rdi_2 + 0x10) + 0xc)
                                    rcx_5 = rdi_2[2]
                                while (r9_1 u< rcx_5)
                        
                        *(rsi_1 + 0x10) = r10_2
                        rsi_1[2] = rcx_5
                    else if (rax_7 == 1)
                        rsi_1[4] = rdi_2[4]
                        rsi_1[3] = *(arg1->Anonymous.Desc_1_0.__offset(0x8).q + rdx_4 + 0xc)
                        rsi_1[2] = *(arg1->Anonymous.Desc_1_0.__offset(0x8).q + rdx_4 + 8)
                    else if (rax_7 - 2 u<= 2)
                        rsi_1[3] = rdi_2[3]
                        rsi_1[2] = *(arg1->Anonymous.Desc_1_0.__offset(0x8).q + rdx_4 + 8)
                    
                    Desc_1_0 = arg1->Anonymous.Desc_1_0.d
                    r12_1 += 1
                while (r12_1 u< Desc_1_0)
                
                if (r15 s>= 0)
                    goto label_141049696
            
            if (lpMem != 0)
                if (arg1->Anonymous.Desc_1_0.d u> 0)
                    do
                        uint64_t rdi_4 = zx.q(i) << 5
                        
                        if (*(rdi_4 + arg1->Anonymous.Desc_1_0.__offset(0x8).q) == 0)
                            HeapFree(GetProcessHeap(), HEAP_NONE, *(rdi_4 + lpMem + 0x10))
                        
                        i += 1
                    while (i u< arg1->Anonymous.Desc_1_0.d)
                
                HeapFree(GetProcessHeap(), HEAP_NONE, lpMem)
        else
            r15 = E_OUTOFMEMORY
        
        return zx.q(r15)
else if (arg2 == 2)
    return D3D12SerializeVersionedRootSignature(arg1, arg3, arg4) __tailcall

return 0x80070057
