// 函数: sub_140be3800
// 地址: 0x140be3800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* result = (*(*arg1 + 0x268))(arg1)
int64_t* rdi = arg1[0x14]

if (rdi != 0)
    result = sx.q(rdi[1].d)
    int64_t* rbx_1 = *rdi
    void* rbp_1 = &rbx_1[result * 5]
    
    if (rbx_1 != rbp_1)
        do
            result = sub_140ccfa10()
            bool rcx_3
            void* result_1
            
            if (*rbx_1 == 0)
                rcx_3 = true
                result_1 = nullptr
            else
                result = sub_140d3e110(&rbx_1[1])
                result_1 = *rbx_1
                rcx_3 = result.b == 0
            
            if (rcx_3 == 0 || rbx_1[3].d == 0)
                goto label_140be38aa
            
            result = sub_140cd0630(rbx_1, arg1, 0)
            result_1 = result
            
            if (result != 0 && (data_1439a9d98 & *(*(result + 8) + 0x10)) != 0)
                *rbx_1 = result
            label_140be38aa:
                
                if (result_1 != 0)
                    result = arg1[0xc]
                    *(sx.q(rbx_1[4].d) + result) = result_1
            else if (*rbx_1 != 0)
                rbx_1[1].d = 0xffffffff
                *(rbx_1 + 0xc) = 0
                *rbx_1 = 0
            
            rbx_1 = &rbx_1[5]
        while (rbx_1 != rbp_1)
        
        rdi = arg1[0x14]
    
    if (rdi != 0)
        sub_140846450(rdi)
        result = j_sub_140a74f90(rdi)
        arg1[0x14] = 0

return result
