// 函数: sub_1428f4b40
// 地址: 0x1428f4b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax_1 = sub_1428f35e0(arg2, sub_14060aa60(arg1))

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0x26).d, 0xbb, 0x94, "crypto\engine\eng_cnf.c", 0xa5)
    return 0

int32_t rbx = 0

if (sub_142898c70(rax_1) s> 0)
    int32_t rax_6
    
    do
        void* rax_4 = sub_142898ea0(rax_1, rbx)
        
        if (sub_1428f46d0(*(rax_4 + 8), *(rax_4 + 0x10), arg2) == 0)
            return 0
        
        rbx += 1
        rax_6 = sub_142898c70(rax_1)
    while (rbx s< rax_6)

return 1
