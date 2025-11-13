// 函数: sub_140b720a0
// 地址: 0x140b720a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t totalBytesAvail = 0

if (PeekNamedPipe(arg1, nullptr, 0, nullptr, &totalBytesAvail, nullptr) != 0)
    uint32_t nNumberOfBytesToRead = totalBytesAvail
    
    if (nNumberOfBytesToRead != 0)
        int32_t rax_1 = arg2[1].d
        
        if (nNumberOfBytesToRead s> rax_1)
            arg2[1].d = nNumberOfBytesToRead
            
            if (nNumberOfBytesToRead s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
                nNumberOfBytesToRead = totalBytesAvail
        else if (nNumberOfBytesToRead s< rax_1 && rax_1 != nNumberOfBytesToRead)
            arg2[1].d = nNumberOfBytesToRead
            sub_1405dac10(arg2)
            nNumberOfBytesToRead = totalBytesAvail
        
        uint8_t* lpBuffer = *arg2
        uint32_t numberOfBytesRead = 0
        
        if (ReadFile(arg1, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr) != 0)
            uint32_t numberOfBytesRead_1 = numberOfBytesRead
            
            if (numberOfBytesRead_1 u< totalBytesAvail)
                int64_t rdi_1 = sx.q(arg2[1].d)
                
                if (numberOfBytesRead_1 s> rdi_1.d)
                    arg2[1].d = numberOfBytesRead_1
                    
                    if (numberOfBytesRead_1 s> *(arg2 + 0xc))
                        sub_1405daba0(arg2)
                    
                    memset(rdi_1 + *arg2, 0, sx.q(numberOfBytesRead_1 - rdi_1.d))
                    int64_t rax_3
                    rax_3.b = 1
                    return rax_3
                
                if (numberOfBytesRead_1 s< rdi_1.d)
                    int32_t rcx_8 = rdi_1.d
                    
                    if (rcx_8 != numberOfBytesRead_1)
                        arg2[1].d = rdi_1.d - (rcx_8 - numberOfBytesRead_1)
                        sub_1405dac10(arg2)
            
            numberOfBytesRead_1.b = 1
            return numberOfBytesRead_1
        
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_1405c5510(arg2, 0)

BOOL rax
rax.b = 0
return rax
