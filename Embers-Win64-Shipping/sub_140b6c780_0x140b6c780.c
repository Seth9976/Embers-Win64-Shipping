// 函数: sub_140b6c780
// 地址: 0x140b6c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
wchar16* lpBuffer_1
sub_140b6c020(arg1, sub_140b67cf0(&lpBuffer_1))
wchar16* lpBuffer_2 = lpBuffer_1

if (lpBuffer_2 != 0)
    sub_140a74f90(lpBuffer_2)

if (arg1[1].d s<= 1)
    wchar16 filename[0x60]
    memset(&filename, 0, 0x208)
    
    if (GetModuleFileNameW(GetModuleHandleW(nullptr), &filename, 0x104) != 0)
        int32_t r14_1 = 0
        int32_t rdx_2 = 0
        int32_t rcx_4 = 0
        int32_t var_260_1 = 0
        int32_t var_25c_1 = 0
        lpBuffer_1 = nullptr
        
        if (filename[0] != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (filename[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&lpBuffer_1, rbx_1.d + 1)
                rcx_4 = var_25c_1
                rdx_2 = var_260_1
            
            int32_t rax_5 = rbx_1.d + 1 + rdx_2
            int32_t var_260_2 = rax_5
            
            if (rax_5 s> rcx_4)
                sub_140594770(&lpBuffer_1)
            
            UnDecorator::getReferenceType(lpBuffer_1, &filename, (rbx_1.d + 1) * 2)
        
        int64_t var_258
        int64_t* rax_6 = sub_140b1a660(&var_258, &lpBuffer_1)
        
        if (arg1 != rax_6)
            int64_t rcx_9 = *arg1
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            *arg1 = *rax_6
            *rax_6 = 0
            arg1[1].d = rax_6[1].d
            *(arg1 + 0xc) = *(rax_6 + 0xc)
            rax_6[1] = 0
        
        int64_t rcx_11 = var_258
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        wchar16* lpBuffer_3 = lpBuffer_1
        
        if (lpBuffer_3 != 0)
            sub_140a74f90(lpBuffer_3)
        
        sub_140a20b00(arg1, U";", 1)
        uint32_t nBufferLength_3 = 0x80
        lpBuffer_1 = nullptr
        uint32_t nBufferLength = 0
        int32_t var_25c_2 = 0
        bool cond:0_1 = true
        bool cond:2_1 = false
        wchar16* lpBuffer = nullptr
        int32_t rsi_1 = 0
        
        while (true)
            uint32_t nBufferLength_1
            
            if (not(cond:2_1))
                nBufferLength = nBufferLength_3
                nBufferLength_1 = nBufferLength
                
                if (nBufferLength_3 s> rsi_1)
                    sub_140594770(&lpBuffer_1)
                label_140b6c989:
                    lpBuffer = lpBuffer_1
                    nBufferLength = nBufferLength_1
                    rsi_1 = var_25c_2
            else if (not(cond:0_1))
                uint32_t rax_10 = nBufferLength - nBufferLength_3
                
                if (nBufferLength != nBufferLength_3)
                    uint32_t nBufferLength_6 = nBufferLength - rax_10
                    
                    if (nBufferLength_6 != nBufferLength_3)
                        memmove(&lpBuffer[sx.q(nBufferLength_3)], 
                            &lpBuffer[sx.q(rax_10 + nBufferLength_3)], 
                            (nBufferLength_6 - nBufferLength_3) * 2)
                    
                    nBufferLength_1 = nBufferLength_6
                    sub_1405a50a0(&lpBuffer_1)
                    goto label_140b6c989
            uint32_t nBufferLength_5 = GetCurrentDirectoryW(nBufferLength, lpBuffer)
            nBufferLength_3 = nBufferLength_5
            
            if (nBufferLength_5 == 0)
                nBufferLength = 0
                
                if (rsi_1 s< 0)
                    uint32_t nBufferLength_2 = 0
                    
                    if (rsi_1 != 0)
                        sub_1405947f0(&lpBuffer_1, 0)
                        nBufferLength = nBufferLength_2
                        lpBuffer = lpBuffer_1
                
                if (lpBuffer != 0)
                    *lpBuffer = 0
                
                break
            
            cond:0_1 = nBufferLength_5 s>= nBufferLength
            cond:2_1 = nBufferLength_5 s<= nBufferLength
            
            if (nBufferLength_5 u< nBufferLength)
                if (nBufferLength_3 + 1 s> nBufferLength)
                    uint32_t r12_2 = nBufferLength_3 + 1 - nBufferLength
                    int64_t nBufferLength_4 = sx.q(nBufferLength)
                    nBufferLength = nBufferLength_3 + 1
                    
                    if (nBufferLength_3 + 1 s> rsi_1)
                        sub_140594770(&lpBuffer_1)
                        lpBuffer = lpBuffer_1
                    
                    memset(&lpBuffer[nBufferLength_4], 0, sx.q(r12_2) * 2)
                else if (nBufferLength_3 + 1 s< nBufferLength
                        && nBufferLength_3 + 1 != nBufferLength)
                    sub_1405a50a0(&lpBuffer_1)
                    nBufferLength = nBufferLength_3 + 1
                    lpBuffer = lpBuffer_1
                
                break
        
        if (nBufferLength != 0)
            r14_1 = nBufferLength - 1
        
        sub_140a20ba0(arg1, lpBuffer, r14_1)
        
        if (lpBuffer != 0)
            sub_140a74f90(lpBuffer)
        
        sub_140a20b00(arg1, U";", 1)

__security_check_cookie(rax_1 ^ &var_288)
return arg1
