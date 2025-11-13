// 函数: sub_1429220e0
// 地址: 0x1429220e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = 0x30
__chkstk(0x30)
void* i = data_143fecf90

if (i != 0)
    result = i
    
    do
        if (result != 0)
            sub_1428a5c40(data_144020538)
            void* rdx_2 = data_143fecf90
            void* rax = rdx_2
            
            if (rdx_2 != 0)
                while (rax != i)
                    rax = *(rax + 0xb8)
                    
                    if (rax == 0)
                        goto label_14292216e
            
            if (rdx_2 == 0 || rax == 0)
            label_14292216e:
                sub_1428a5670(0x26, 0x79, 0x69, "crypto\engine\eng_list.c", 0x70)
                sub_1428a5670(0x26, 0x7b, 0x6e, "crypto\engine\eng_list.c", 0xf0)
            else
                void* rcx_4 = *(i + 0xb8)
                
                if (rcx_4 != 0)
                    *(rcx_4 + 0xb0) = *(i + 0xb0)
                
                void* rcx_5 = *(i + 0xb0)
                
                if (rcx_5 != 0)
                    *(rcx_5 + 0xb8) = *(i + 0xb8)
                
                if (rdx_2 == i)
                    data_143fecf90 = *(i + 0xb8)
                
                if (data_143fecf98 == i)
                    data_143fecf98 = *(i + 0xb0)
                
                sub_1428e33d0(i, 0)
            
            sub_1428a5d00(data_144020538)
        else
            sub_1428a5670((result + 0x26).d, (result + 0x7b).d, (result + 0x43).d, 
                "crypto\engine\eng_list.c", 0xeb)
        
        i = data_143fecf90
        result = i
    while (i != 0)

return result
