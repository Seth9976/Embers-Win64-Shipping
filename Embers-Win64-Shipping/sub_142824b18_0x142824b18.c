// 函数: sub_142824b18
// 地址: 0x142824b18
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
rbx.b = 0
int64_t* rcx = *arg1

while (true)
    void* result = sub_142828cbc(rcx)
    
    if (result.b != 0)
        return result
    
    result = sub_142828cd8(*arg1)
    
    if (*(result + 4) != 0)
        return result
    
    if (rbx.b == 0)
        char* rax_1 = j_sub_140a82f30(0x20)
        char* arg_8 = rax_1
        
        if (rax_1 != 0)
            rax_1 = sub_142826854(rax_1)
        
        void* rsi_1 = arg1[1]
        arg1[1] = rax_1
        
        if (rsi_1 != 0)
            sub_1428242c8(rsi_1 + 0x10, rsi_1 + 0x10, *(*(rsi_1 + 0x10) + 8))
            sub_14058ba50(*(rsi_1 + 0x10), 0x60)
            j_sub_140a74f90(rsi_1)
    
    rbx.b = 1
    sub_142824654(arg1, result)
    sub_142828d00(*arg1)
    rcx = *arg1
