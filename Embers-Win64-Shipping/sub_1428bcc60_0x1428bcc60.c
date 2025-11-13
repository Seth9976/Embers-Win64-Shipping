// 函数: sub_1428bcc60
// 地址: 0x1428bcc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *arg1

if (rax != 0 && *(rax + 0x10) != 0)
    void* rcx = arg1[1]
    int32_t rax_1
    
    if (rcx != 0)
        rax_1 = sub_1428af800(rcx)
    
    if (rcx == 0 || rax_1 != 0)
        int64_t* result = sub_1428a6730(0x50)
        
        if (result == 0)
            sub_1428a5670((result + 6).d, 0x9c, (result + 0x41).d, "crypto\evp\pmeth_lib.c", 0x10b)
            return 0
        
        *result = *arg1
        result[1] = arg1[1]
        void* rax_6 = arg1[2]
        
        if (rax_6 != 0)
            sub_142896e70(rax_6)
            rax_6 = arg1[2]
        
        result[2] = rax_6
        void* rax_7 = arg1[3]
        
        if (rax_7 != 0)
            sub_142896e70(rax_7)
            rax_7 = arg1[3]
        
        result[3] = rax_7
        result[5] = 0
        result[6] = 0
        result[4].d = arg1[4].d
        
        if ((*(*arg1 + 0x10))(result, arg1) s> 0)
            return result
        
        *result = 0
        sub_1428bcda0(result)
        return 0
    
    sub_1428a5670(rax_1 + 6, 0x9c, rax_1 + 0x26, "crypto\evp\pmeth_lib.c", 0x105)

return 0
